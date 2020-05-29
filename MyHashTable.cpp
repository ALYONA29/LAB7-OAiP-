//---------------------------------------------------------------------------

#pragma hdrstop

#include "MyHashTable.h"
#include <stdlib.h>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)

void myClass::search(int hashTableSize, myClass** myHashTable, int *b)
{
	int count;
	for (int i = 0; i < hashTableSize; i++)
	{
		count = 0;
		myClass *Temp = myHashTable[i];
		while(Temp)
		{
			count++;
			Temp = Temp->Next;
		}
		b[i] = count;
	}
}

myClass* myClass::insertMyNode(T data, int hashTableSize, myClass **myHashTable)
{
	Node node;
	myClass *p, *p0;
	hashTableIndex bucket;
	bucket = node.myhash(data, hashTableSize);
	if ((p = new myClass) == 0)
	{
		return p = new myClass;
	}
	p0 = myHashTable[bucket];
	myHashTable[bucket] = p;
	p->Next = p0;
	p->TInf.data = data;
	return p;
}

void myClass::deleteMyNode(T data, int hashTableSize, myClass **myHashTable)
{
	myClass *p0, *p;
	hashTableIndex bucket;
	p0 = 0;
	bucket = myhash(data, hashTableSize);
	p = myHashTable[bucket];
	while (p && !compEQ(p->TInf.data, data))
	{
		p0 = p;
		p = p->Next;
	}
	if (!p)
	{
		return;
	}
	if (p0)
	{
		p0->Next = p->Next;
	}
	else
	{
		myHashTable[bucket] = p->Next;
	}
	delete (p);
}
