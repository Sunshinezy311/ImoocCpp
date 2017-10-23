#include "Seq_Tree.h"
//#include <cstdlib>
#include <iostream>
using namespace std;

Seq_Tree::Seq_Tree(int size, int *pRoot)
{
	m_pTree = new int[size];
	m_iSize = size;
	for (int i = 0; i < m_iSize; i++)
	{
		m_pTree[i] = 0;
	}
	m_pTree[0] = *pRoot;
}

Seq_Tree::~Seq_Tree()
{
	delete[]m_pTree;
	m_pTree = NULL;
}

int * Seq_Tree::Search_Node(int nodeIndex)
{
	if (nodeIndex < 0 || nodeIndex >= m_iSize)
		return NULL;
	if (m_pTree[nodeIndex] == 0)
		return NULL;
	return &m_pTree[nodeIndex];
}

bool Seq_Tree::Add_Node(int nodeIndex, int direction, int * pNode)
{
	if (nodeIndex < 0 || nodeIndex >= m_iSize)
		return false;
	if (m_pTree[nodeIndex] == 0)
		return false;
	if (direction == 0)
	{
		if (nodeIndex * 2 + 1 >= m_iSize)
			return false;
		if (m_pTree[nodeIndex * 2 + 1] != 0)
			return false;
		m_pTree[nodeIndex * 2 + 1] = *pNode;
	}

	if (direction == 1)//又他妈忘了是==写错了程序都是乱七八糟的
	{
		if (nodeIndex * 2 + 2 >= m_iSize)
			return false;
		if (m_pTree[nodeIndex * 2 + 2] != 0)
			return false;
		m_pTree[nodeIndex * 2 + 2] = *pNode;
	}
	return true;
}

bool Seq_Tree::Del_Node(int nodeIndex, int * pNode)
{
	if (nodeIndex < 0 || nodeIndex >= m_iSize)
		return false;
	if (m_pTree[nodeIndex] == 0)
		return false;
	if (m_pTree[2 * nodeIndex + 1] != 0 || m_pTree[2 * nodeIndex + 2] != 0)
		return false;
	*pNode = m_pTree[nodeIndex];
	m_pTree[nodeIndex] = 0;
	return true;
}

void Seq_Tree::Tree_Traverse()
{
	for (int i = 0; i < m_iSize; i++)
		cout << m_pTree[i] << endl;
}
