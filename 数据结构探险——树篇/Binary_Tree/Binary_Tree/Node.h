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
	void DeleteNode();//��Tree���е�Delete��ȣ�ʡȥ��bool���أ�Ҳ����Ҫindex������ҪpNode����Щ����Tree�е�DeleteNode�����˲���
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
{//thisָ��ָ��ǰNode�ڵ�
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
ע��д��������ʱ�����д��
template<class T>
inline Node<T>::Node<T> *Search_Node(int nodeIndex)
{

}
*/

template<class T>
inline void Node<T>::PreOrderTraversal()
{
	cout << this->index << ": " << this->data << endl;//��
	if (this->pLchild != NULL)
	{
		this->PreOrderTraversal();//��
	}
	if (this->pRchild != NULL)
	{
		this->PreOrderTraversal();//��
	}
}

template<class T>
inline void Node<T>::InOrderTraversal()
{
	if (this->pLchild != NULL)
	{
		this->InOrderTraversal();//��
	}
	cout << this->index << ": " << this->data << endl;//��
	if (this->pRchild != NULL)
	{
		this->InOrderTraversal();//��
	}
}

template<class T>
inline void Node<T>::PostOrderTraversal()
{
	if (this->pLchild != NULL)
	{
		this->PostOrderTraversal();//��
	}
	if (this->pRchild != NULL)
	{
		this->PostOrderTraversal();//��
	}
	cout << this->index << ": " << this->data << endl;//��
}




