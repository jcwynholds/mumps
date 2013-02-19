#include "btree_map.h"
#include "btree-extern.h"

/*
 * Storage for btree-mumps
 * Local btree has key nodes and shared_ptr values
 * key nodes are global m reference (thread uci ns)
 * shared_ptr refer to data data location
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
using namespace mumps;

typedef btree_map<int, int> BTreePool;

BTreePool* buildMap() {
    BTreePool *obj_map = new BTreePool;
    return obj_map;   
}

extern "C" void* externMap(void) {
    return mumps::buildMap();
}

/*
struct BTreePool * getBTreePool(void) {
	static BTreePool btpoolinst;
	return &btpoolinst;
}DB_BTree;
*/


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
