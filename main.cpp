//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "MyHashTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
Node **hashTable;
myClass **myHashTable;
Node node;
myClass my;
int hashTableSize;
int i, *a, *b, maxnum;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CreationClick(TObject *Sender)
{
	Memo1->Clear();
	if(Edit1->Text == "" || Edit2->Text == "")
	{
		ShowMessage("������� ������");
		return;
	}
	maxnum = StrToInt(Edit1->Text);
	hashTableSize = StrToInt(Edit2->Text);
	a = new int[maxnum];
	b = new int[maxnum];
	hashTable = new Node*[hashTableSize];
	myHashTable = new myClass*[hashTableSize];
	for (i = 0; i < hashTableSize; i++)
	{
		hashTable[i] = NULL;
   		myHashTable[i] = NULL;
	}
	for (i = 0; i < maxnum; i++)
	{
		a[i] = rand();
   		b[i] = a[i];
	}
	for (i = 0; i < maxnum; i++)
	{
		if(!node.insertNode(a[i], hashTableSize, hashTable) || !my.insertMyNode(b[i], hashTableSize, myHashTable))
		{
			ShowMessage("�������� ������ (insertMyNode)");
		}
		Memo1->Lines->Add(a[i]);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Memo1->Clear();
	Memo2->Clear();
	RichEdit1->Clear();
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
	Edit5->Clear();
	Memo1->ScrollBars = ssBoth;
	Memo2->ScrollBars = ssBoth;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PrintClick(TObject *Sender)
{
	RichEdit1->Clear();
	Memo2->Clear();
	for (i = 0; i < hashTableSize; i++)
	{
		RichEdit1->Lines->Add("");
		RichEdit1->Text = RichEdit1->Text + IntToStr(i + 1) + " : ";
		Node *Temp = hashTable[i];
		while(Temp)
		{
			Memo2->Lines-> Add(IntToStr(i + 1) + ":" + IntToStr(Temp->data));
			RichEdit1->Text = RichEdit1->Text + IntToStr(Temp->data) + " -> ";
			Temp = Temp->next;
		}
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::DeleteAllClick(TObject *Sender)
{
	for (i = maxnum-1; i >= 0; i--)
	{
		node.deleteNode(a[i], hashTableSize, hashTable);
		my.deleteMyNode(b[i], hashTableSize, myHashTable);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SearchClick(TObject *Sender)
{
	RichEdit1->Clear();
	Memo1->Clear();
	if(Edit3->Text == "")
	{
		ShowMessage("������� ������");
		return;
	}
	int num = StrToInt(Edit3->Text);
	bool check = false;
	check = node.findNode(num, hashTable, hashTableSize, check);
	if(check == true)
	{
		Memo1->Lines->Add("������� ������ : ");
		Memo1->Lines->Add(num);
	}
	else
	{
		Memo1->Lines->Add("������ �������� ���");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DeleteClick(TObject *Sender)
{
    RichEdit1->Clear();
	Memo1->Clear();
	if(Edit4->Text == "")
	{
		ShowMessage("������� ������");
		return;
	}
	int num = StrToInt(Edit4->Text);
	Node *p;
	p = hashTable[node.myhash(num, hashTableSize)];
	bool check = false;
	while(p)
	{
        if(compEQ(p->data, num))
		{
			Memo1->Lines->Add("����� ������� : ");
			Memo1->Lines->Add(num);
			node.deleteNode(num, hashTableSize, hashTable);
            my.deleteMyNode(num, hashTableSize, myHashTable);
			check = true;
		}
		p = p->next;
	}
    if(check == false)
	{
		Memo1->Lines->Add("������ �������� ���");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddClick(TObject *Sender)
{
	if(Edit5->Text == "")
	{
		ShowMessage("������� ������");
		return;
	}
	int num = StrToInt(Edit5->Text);
	if(!node.insertNode(num, hashTableSize, hashTable) || !my.insertMyNode(num, hashTableSize, myHashTable))
	{
		ShowMessage("�������� ������ (insertMyNode)");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TaskClick(TObject *Sender)
{
	Memo2->Clear();
	int buf[hashTableSize];
	my.search(hashTableSize, myHashTable, buf);
	for (i = 0; i < hashTableSize; i++)
	{
		Memo2->Lines->Add(IntToStr(i + 1) + ": "+IntToStr(buf[i]) + " elements");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if((Key < '0' || Key > '9')&& Key != VK_BACK && Key != VK_DELETE && Key != 13)
	{
		ShowMessage("������������ ������! �������� ���� ����� �����. � ���������� ��� ��������� ������������ �� �����.");
		Key = NULL;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
    if((Key < '0' || Key > '9')&& Key != VK_BACK && Key != VK_DELETE && Key != 13)
	{
		ShowMessage("������������ ������! �������� ���� ����� �����. � ���������� ��� ��������� ������������ �� �����.");
		Key = NULL;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
    if((Key < '0' || Key > '9')&& Key != VK_BACK && Key != VK_DELETE && Key != 13)
	{
		ShowMessage("������������ ������! �������� ���� ����� �����. � ���������� ��� ��������� ������������ �� �����.");
		Key = NULL;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit4KeyPress(TObject *Sender, System::WideChar &Key)
{
    if((Key < '0' || Key > '9')&& Key != VK_BACK && Key != VK_DELETE && Key != 13)
	{
		ShowMessage("������������ ������! �������� ���� ����� �����. � ���������� ��� ��������� ������������ �� �����.");
		Key = NULL;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit5KeyPress(TObject *Sender, System::WideChar &Key)
{
    if((Key < '0' || Key > '9')&& Key != VK_BACK && Key != VK_DELETE && Key != 13)
	{
		ShowMessage("������������ ������! �������� ���� ����� �����. � ���������� ��� ��������� ������������ �� �����.");
		Key = NULL;
	}
}
//---------------------------------------------------------------------------

