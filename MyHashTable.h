//---------------------------------------------------------------------------

#ifndef MyHashTableH
#define MyHashTableH
//---------------------------------------------------------------------------
#endif

#include "HashTable.h"

class myClass : public Node
{
	public:
		Node TInf;
		myClass *Next;
		void search(int hashTableSize, myClass** myHashTable, int *b);
		myClass* insertMyNode(T data, int hashTableSize, myClass **myHashTable);
		void deleteMyNode(T data, int hashTableSize, myClass **myHashTable);
};

