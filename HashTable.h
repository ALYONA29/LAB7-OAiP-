//---------------------------------------------------------------------------

#ifndef HashTableH
#define HashTableH
//---------------------------------------------------------------------------
#endif

typedef int T;
typedef int hashTableIndex;
#define compEQ(a,b) (a == b)
class Node
{
    public:
	   T data;
	   Node *next;
	   hashTableIndex myhash(T data, int hashTableSize);
	   Node *insertNode(T data, int hashTableSize, Node **hashTable);
       void deleteNode(T data, int hashTableSize, Node **hashTable);
};