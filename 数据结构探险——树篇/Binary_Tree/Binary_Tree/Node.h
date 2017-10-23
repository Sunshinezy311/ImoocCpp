#include <iostream>

using namespace std;
template <class T>
class Node {
public:
	Node();
	int index;
	T data;
	Node<T> *pLchild;
	Node<T> *pRchild;
	Node<T> *pParent;
	Node<T> *SearchNode(int nodeIndex);
	void DeleteNode();//与Tree类中的Delete相比，省去了bool返回，也不需要index，不需要pNode。这些都由Tree中的DeleteNode保存了参数
	void PreOrderTraversal();
	void InOrderTraversal();
	void PostOrderTraversal();

};

template<class T>
inline Node<T>::Node()
{
	index = 0;
	data = NULL;
	pLchild = NULL;
	pRchild = NULL;
	pParent = NULL;
}

template<class T>
inline Node<T>* Node<T>::SearchNode(int nodeIndex)
{//this指针指向当前Node节点
	if (this->index == nodeIndex)
	{
		return this;
	}
	if (this->pLchild != NULL)
	{
		if (this->pLchild == nodeIndex)
		{
			return this->pLchild
		}
	}
	if (this->pRchild != NULL)
	{
		if (this->pRchild == nodeIndex)
		{
			return this->pRchild;
		}
	}
	return NULL;
}

template<class T>
inline void Node<T>::DeleteNode()
{
	if (this->pLchild != NULL)
	{
		this->pLchild->DeleteNode();
	}
	if (this->pRchild != NULL)
	{
		this->pRchild->DeleteNode();
	}
	if (this->pParent != NULL) 
	{
		if (this->pParent->pLchild == this)
		{
			this->pParent->pLchild = NULL;
		}
		if (this->pParent->pRchild == this)
		{
			this->pParent->pRchild = NULL;
		}
	}
	delete this;
}
/*
注意写法，下述时错误的写法
template<class T>
inline Node<T>::Node<T> *Search_Node(int nodeIndex)
{

}
*/

template<class T>
inline void Node<T>::PreOrderTraversal()
{
	cout << this->index << ": " << this->data << endl;//根
	if (this->pLchild != NULL)
	{
		this->PreOrderTraversal();//左
	}
	if (this->pRchild != NULL)
	{
		this->PreOrderTraversal();//右
	}
}

template<class T>
inline void Node<T>::InOrderTraversal()
{
	if (this->pLchild != NULL)
	{
		this->InOrderTraversal();//左
	}
	cout << this->index << ": " << this->data << endl;//根
	if (this->pRchild != NULL)
	{
		this->InOrderTraversal();//右
	}
}

template<class T>
inline void Node<T>::PostOrderTraversal()
{
	if (this->pLchild != NULL)
	{
		this->PostOrderTraversal();//左
	}
	if (this->pRchild != NULL)
	{
		this->PostOrderTraversal();//右
	}
	cout << this->index << ": " << this->data << endl;//根
}




