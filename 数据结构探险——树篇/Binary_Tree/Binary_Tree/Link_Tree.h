#ifndef LINK_TREE_H
#define LINK_TREE_H
#include "Node.h"

template <class T>
class Link_Tree
{
public:
	Link_Tree();
	~Link_Tree();
	int *Search_Node(int nodeIndex);//关键操作，在插入节点时要查找树的位置
	bool Add_Node(int nodeIndex, int direction, Node<T> *pNode);//direction是指左孩子还是右孩子，0为左1为右
	bool Del_Node(int nodeIndex, Node<T> *pNode);//如果删除了一个非叶节点，则需把他其下所有子节点删除
	void Tree_Preorder_Traverse();
	void Tree_Inorder_Traverse();
	void Tree_Postorder_Traverse();

private:
	Node<T> *m_pRoot;
};
#endif // !LINK_TREE_H

template<class T>
inline Link_Tree<T>::Link_Tree()
{
	m_pRoot=new Node<T>();
}

template<class T>
inline Link_Tree<T>::~Link_Tree()
{
	Del_Node(0, NULL);
}

template<class T>
inline int * Link_Tree<T>::Search_Node(int nodeIndex)
{
	/*由于在当前的树中查找节点需要遍历，而遍历必然用到Node自己去查看
	其自己以及左右父节点对应的索引值，因此可以先去在Node.h中实现*/

	return m_pRoot->SearchNode(nodeIndex);
}

template<class T>
inline bool Link_Tree<T>::Add_Node(int nodeIndex, int direction, Node<T>* pNode)
{
	//希望有一个指针可以接受返回值
	Node<T> *temp = new Node<T>();
	temp = Search_Node(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}
	//pNode作为外边传入的参数，具有动态变化性，因此需要一个临时的变量保存pNode值
	Node<T>* node = new Node<T>();
	node->index = pNode->index;
	node->data = node->data;
	if (direction = 0)
	{
		temp->pLchild = node;//不用把data和index再赋值一遍，因为node已经是新申请的了，就可以算作一个树的新节点
	}
	if (direction = 1)
	{
		temp->pRchild = node;
	}
	return true;
}

template<class T>
inline bool Link_Tree<T>::Del_Node(int nodeIndex, Node<T>* pNode)
{
	Node<T> *temp = Search_Node(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}
	pNode->data = temp->data;
	//由于删除时大部分都是一个节点的操作，可以在Node中定义删除函数，然后这边调用之
	temp->DeleteNode();
	return false;
}

template<class T>
inline void Link_Tree<T>::Tree_Preorder_Traverse()
{
	//由于遍历也是针对节点的遍历，利用递归调用实现遍历所有节点
	m_pRoot->PreOrderTraversal();
}

template<class T>
inline void Link_Tree<T>::Tree_Inorder_Traverse()
{
	m_pRoot->InOrderTraversal();
}

template<class T>
inline void Link_Tree<T>::Tree_Postorder_Traverse()
{
	m_pRoot->PostOrderTraversal();
}

