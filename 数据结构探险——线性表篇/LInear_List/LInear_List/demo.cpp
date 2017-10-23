#include <iostream>
//#include "Seq_List.h"
#include "Link_List.h"
#include <cstdlib>

using namespace std;

int main(void) 
{
	//Seq_List
	/*
	int a[4] = { 3,5,7,2 };
	int temp = 0;
	SeqList *plist = new SeqList(4);
	plist->List_Insert(0, &a[0]);
	plist->List_Insert(1, &a[1]);
	plist->List_Insert(2, &a[2]);
	plist->List_Insert(3, &a[3]);
//	plist->List_Traverse();
	plist->Get_Elem(0, &temp);
	cout << temp << endl;

	plist->Prior_Elem(&a[0], temp);
	cout << temp << endl;
	plist->Next_Elem(&a[2], temp);
	cout << temp << endl;
//	delete plist;
//	plist = NULL;
	*/

	//Link_List
	Node node1;
	node1.data = 3;

	Node node2;
	node2.data = 4;

	Node node3;
	node3.data = 5;

	Node node4;
	node4.data = 6;

	Node node5;
	node5.data = 777;

	Node temp;

	Link_List *plist = new Link_List();
	/*
	plist->List_Insert_Head(&node1);
	plist->List_Insert_Head(&node2);
	plist->List_Insert_Head(&node3);
	plist->List_Insert_Head(&node4);
	plist->List_Insert(2, &node5);
	plist->List_Delete(3);
	plist->Traverse_List();
	*/

	plist->List_Insert_Tail(&node1);
	plist->List_Insert_Tail(&node2);
	plist->List_Insert_Tail(&node3);
	plist->List_Insert_Tail(&node4);
	plist->Traverse_List();
	plist->Get_Elem(2, &temp);
	cout << temp.data << endl;

	delete plist;
	plist = NULL;
	system("pause");
	return 0;
}