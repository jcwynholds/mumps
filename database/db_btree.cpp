#include "btree_map.h"
#include "btree-extern.h"
#define BLOCK_SIZE 32768

/*
 * Storage for btree-mumps
 * Local btree has key nodes and shared_ptr values
 * key nodes are global m reference (thread uci ns)
 * shared_ptr refer to datablock
 * for data blocks on disk, the shared_ptr refers to disk block obj
 * for data in memory, shared_ptr refers to memory block loc (block+offset)
 * btree struct is <KeyPointer, DataReference>
 * where KeyPointer is a \0 separated string of keys
 * e.g. key for statement: ^Foo("Abba",1, 3.4853,"Greatest Hits")="SomeValue"
 * is: "Abba"\00x0001\0(float 3.4853)\0
 * each key is an c++11 'auto' var
 * Thread worker needs:
 * global reference pool
 * routine reference pool
 * data reference pool
 *
 */

namespace mumps {
    using namespace std;
    using namespace btree;
    
    typedef struct BT_BLOCK BT_BLOCK;
    struct BT_BLOCK {
        uint64_t blockId;
        char data[BLOCK_SIZE];
    } BT_block;
    typedef struct BT_KEY BT_KEY;
    struct BT_KEY {
        uint64_t keyId;
        const char * keyStr;
        uint64_t blockId; // extent address
        short offset;     // chars offset from start of data
    } BT_key;

    typedef btree_map<uint64_t, BT_KEY*> RecordPool;
    typedef btree_map<uint64_t, BT_BLOCK*> BlockPool;

    RecordPool* buildRecMap() {
        RecordPool *obj_map = new RecordPool;
        return obj_map;   
    }
    BlockPool* buildBlockMap() {
        BlockPool *obj_map = new BlockPool;
        return obj_map;   
    }
    BT_BLOCK* getBlock(BlockPool* pool, uint64_t blId) {
        BlockPool::const_iterator lookup = pool->find(blId);
        // if the lookup returns the last in the pool, the lookup failed
        // kinda hacky
        // if (lookup != pool.end())
        std::pair<uint64_t, BT_BLOCK*> rec = *lookup;
        return rec.second;
    }
    BT_KEY* getKey(RecordPool* pool, uint64_t keyId) {
        RecordPool::const_iterator lookup = pool->find(keyId);
        std::pair<uint64_t, BT_KEY*> rec = *lookup;
        return rec.second;
    }

    extern "C" void* externRecMap(void) {
        return buildRecMap();
    }
    extern "C" void* externBlockMap(void) {
        return buildBlockMap();
    }
    extern "C" void* externGetBlock(BlockPool* pool, uint64_t blId) {
        return getBlock(pool, blId);
    }
    extern "C" void* externGetKey(RecordPool* pool, uint64_t keyId) {
        return getKey(pool, keyId);
    }
    extern "C" void setKey(RecordPool* pool, uint64_t keyId, BT_KEY keyOb) {
        RecordPool::const_iterator lookup = pool->find(keyId);
        std::pair<uint64_t, BT_KEY*> rec = *lookup;
        pool->insert(std::make_pair(keyId, &keyOb));
    }
    extern "C" void deleteKey(RecordPool* pool, uint64_t keyId) {
        pool->erase(keyId);
    }
    extern "C" void* newBlock(void) {
        return new BT_BLOCK;
    }

/*
getKey nextKey setKey updateKey deleteKey
getData setData updateData deleteData
getBlock packKeys mNewData
*/


}

/*
MyMap* BuildMap() {
   MyMap *obj_map = new MyMap;

  for (...) {
    int id = ...;
    MyMap::const_iterator lookup = obj_map->find(id);
    if (lookup != obj_map->end()) {
      // "id" already exists.
      continue;
    }
    MyObject *obj = ...;
    obj_map->insert(std::make_pair(id, obj));
  }
  return obj_map;
}
*/
