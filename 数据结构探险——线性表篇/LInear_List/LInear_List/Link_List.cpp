#include "Link_List.h"

Link_List::Link_List()
{
	m_pList = new Node;
	m_pList->data = 0;
	m_pList->next = NULL;
	m_iLength = 0;//注意根节点不算在链表当中
}

Link_List::~Link_List()
{
	Clear_List();
	delete m_pList;
	m_pList = NULL;
}

void Link_List::Clear_List()
{
	Node *currentNode = m_pList->next;
	while (currentNode != NULL)
	{
		Node *temp = currentNode->next;
		delete currentNode;
		currentNode = temp;
	}
	m_pList->next = NULL;
}

bool Link_List::Is_Empty()
{
	if (m_iLength == 0)
		return true;
	else
		return false;
}

bool Link_List::Is_Full()
{
	return false;
}

int Link_List::List_Length()
{
	return m_iLength;
}

bool Link_List::Get_Elem(int i, Node * pNode)
{
	if (i<0 || i>m_iLength)
		return false;
	Node *curNode = m_pList->next;
	for (int t = 0; t <= i; i++)
	{
		curNode = curNode->next;
	}
	pNode->data = curNode->data;
	return true;
}

int Link_List::Locate_Elem(Node * pNode)
{
	int i = 0;
	Node *curNode = m_pList->next;
	while (curNode->next != NULL)
	{
		curNode = curNode->next;
		if (curNode->data == pNode->data)
		{
			return i;
		}
		i++;
	}
	return -1;
}

bool Link_List::Prior_Elem(Node * pCurrentNode, Node * pPriorNode)
{
	Node *curNode = m_pList;
	Node *curNodeBefore = new Node;
	int i = 0;
	while (curNode->next != NULL)
	{
		curNodeBefore = curNode;
		curNode = curNode->next;
		if (curNode->data == pCurrentNode->data)
		{
			//还需要判断curNode是不是头结点的下一个，如果是也需要返回false
			if (curNodeBefore == m_pList)
			{
				return false;
			}
			pPriorNode->data = curNodeBefore->data;
			return true;
		}
	}
	return false;
}

bool Link_List::Next_Elem(Node * pCurrentNode, Node * pNextNode)
{
	Node *curNode = m_pList;
//	Node *curNodeBehind = NULL;
	while (curNode->next != NULL)
	{
		curNode = curNode->next;
		if (curNode->data == pCurrentNode->data)
		{
//			curNodeBehind = curNode->next;
			pNextNode->data = curNode->next->data;
			return true;
		}
	}
	return false;
}

void Link_List::Traverse_List()
{
	Node *curNode = m_pList;
	while (curNode->next != NULL)
	{
		curNode = curNode->next;
		curNode->Print_Node();
	}
}

bool Link_List::List_Insert(int i, Node * pNode)
{
	if(i<0||i>m_iLength)
		return false;
	Node *curNode = new Node;
	Node *newNode = new Node;
	curNode = m_pList->next;
	int t = 0;
	while (t != i-1)
	{
		curNode = curNode->next;
		t++;
	}
	newNode->next = curNode->next;
	curNode->next = newNode;
	newNode->data = pNode->data;
	m_iLength++;
	return true;
}

bool Link_List::List_Delete(int i)
{
	if (i < 0 || i >= m_iLength)
		return false;
	Node *temp = new Node;
	Node *tempBefore = new Node;
	temp = m_pList->next;
	int t = 0;
	while (t != i)
	{
		tempBefore = temp;
		temp = temp->next;
		t++;
	}
	tempBefore->next = temp->next;//注意不要写反了，mdzz
	delete temp;
	temp = NULL;
	m_iLength--;
	return true;
}

bool Link_List::List_Insert_Head(Node * pNode)
{
	Node *temp = m_pList->next;
	Node *newNode = new Node;
//	if (newNode = NULL)//去掉就正常了
//		return false;
	newNode->data = pNode->data;
	m_pList->next = newNode;
	newNode->next = temp;
	m_iLength++;
	return true;
}

bool Link_List::List_Insert_Tail(Node * pNode)
{
	Node *theLast = new Node;
//	Node *temp = m_pList->next;
//	theLast = m_pList->next;错误，这样直接跳到第二个节点了
	theLast = m_pList;
	while (theLast->next != NULL)
	{
		theLast = theLast->next;
//		temp = theLast;
	}
	Node *newNode = new Node;
	if (newNode == NULL)
		return false;
	theLast->next = newNode;
	newNode->data = pNode->data;
	newNode->next = NULL;
	m_iLength++;
	return false;
}
