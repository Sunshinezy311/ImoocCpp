#ifndef LINK_LIST_H
#define LINK_LIST_H

#include <iostream>
#include "Node.h"
class Link_List 
{
public:
	Link_List();
	~Link_List();
	void Clear_List();
	bool Is_Empty();
	bool Is_Full();
	int List_Length();
	bool Get_Elem(int i, Node *pNode);
	int Locate_Elem(Node *pNode);
	bool Prior_Elem(Node *pCurrentNode, Node *pPriorNode);
	bool Next_Elem(Node *pCurrentNode, Node *pNextNode);
	void Traverse_List();
	bool List_Insert(int i, Node *pNode);
	bool List_Delete(int i);
	bool List_Insert_Head(Node *pNode);
	bool List_Insert_Tail(Node *pNode);


private:
	Node *m_pList;//声明一个头节点，用于标记链表
//	int m_iSize; 无需像线性表那样一开始就规定大小
	int m_iLength;


	

};

#endif // !LINK_LIST_H
