#include "Seq_List.h"
#include <iostream>
using namespace std;

SeqList::SeqList(int size)
{
	m_iSize = size;
	m_pList = new int[m_iSize];
	m_iLength = 0;
}

SeqList::~SeqList()
{
	delete []m_pList;
	m_pList = NULL;
}

void SeqList::Clear_List()
{
	m_iLength = 0;
}

bool SeqList::Is_Empty()
{
	if (m_iLength == 0)
		return true;
	return false;
}

bool SeqList::Is_Full()
{
	if (m_iLength = m_iSize)
		return true;
	return false;
}

int SeqList::List_Length()
{
	return m_iLength;
}

bool SeqList::Get_Elem(int i, int * e)
{
	if (i < m_iLength && i >= 0)
		*e = m_pList[i];
		return true;
	return false;
}

int SeqList::Locate_Elem(int * e)
{
	for (int i = 0; i < m_iLength; i++)
		if (m_pList[i] == *e)
			return i;
		else
			return -1;
}

bool SeqList::Prior_Elem(int * cur_elem, int &temp)
{
	int i;
	temp = Locate_Elem(cur_elem);
	if (temp == -1 || temp == 0)
		return false;
	i = m_pList[temp - 1];
	cout << "元素" << *cur_elem << "的前驱是：" << i << endl;
	return true;
}

bool SeqList::Next_Elem(int * cur_elem, int &temp)
{
	temp = Locate_Elem(cur_elem);
	int i;
	if (temp == -1)
		return false;
	else if (temp == m_iSize - 1)
		return false;
	i = m_pList[temp + 1];
	cout << "元素" << *cur_elem << "的后继是：" << i << endl;
	return true;
}

bool SeqList::List_Insert(int i, int * elem)
{
	if (m_iLength == m_iSize)
		return false;
	if (i < 0 || i > m_iLength)
		return false;
	for (int j = m_iLength - 1; j > i; j--)
		m_pList[j + 1] = m_pList[j];
	m_pList[i] = *elem;
	m_iLength++;
	return true;
}

bool SeqList::List_Delete(int i, int * elem)
{
	if (m_iLength = 0)
		return false;
	if (i<0 || i>m_iLength - 1)
		return false;
	for (int j = i; j < m_iLength - 1; j++)
		m_pList[j] = m_pList[j + 1];
	m_iLength--;
	return false;
}

void SeqList::List_Traverse()
{
	for (int i = 0; i < m_iLength; i++)
		cout << m_pList[i] << "，";
}
