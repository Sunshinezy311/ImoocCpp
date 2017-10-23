#ifndef LINK_TREE_H
#define LINK_TREE_H
#include "Node.h"

template <class T>
class Link_Tree
{
public:
	Link_Tree();
	~Link_Tree();
	int *Search_Node(int nodeIndex);//�ؼ��������ڲ���ڵ�ʱҪ��������λ��
	bool Add_Node(int nodeIndex, int direction, Node<T> *pNode);//direction��ָ���ӻ����Һ��ӣ�0Ϊ��1Ϊ��
	bool Del_Node(int nodeIndex, Node<T> *pNode);//���ɾ����һ����Ҷ�ڵ㣬����������������ӽڵ�ɾ��
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
	/*�����ڵ�ǰ�����в��ҽڵ���Ҫ��������������Ȼ�õ�Node�Լ�ȥ�鿴
	���Լ��Լ����Ҹ��ڵ��Ӧ������ֵ����˿�����ȥ��Node.h��ʵ��*/

	return m_pRoot->SearchNode(nodeIndex);
}

template<class T>
inline bool Link_Tree<T>::Add_Node(int nodeIndex, int direction, Node<T>* pNode)
{
	//ϣ����һ��ָ����Խ��ܷ���ֵ
	Node<T> *temp = new Node<T>();
	temp = Search_Node(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}
	//pNode��Ϊ��ߴ���Ĳ��������ж�̬�仯�ԣ������Ҫһ����ʱ�ı�������pNodeֵ
	Node<T>* node = new Node<T>();
	node->index = pNode->index;
	node->data = node->data;
	if (direction = 0)
	{
		temp->pLchild = node;//���ð�data��index�ٸ�ֵһ�飬��Ϊnode�Ѿ�����������ˣ��Ϳ�������һ�������½ڵ�
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
	//����ɾ��ʱ�󲿷ֶ���һ���ڵ�Ĳ�����������Node�ж���ɾ��������Ȼ����ߵ���֮
	temp->DeleteNode();
	return false;
}

template<class T>
inline void Link_Tree<T>::Tree_Preorder_Traverse()
{
	//���ڱ���Ҳ����Խڵ�ı��������õݹ����ʵ�ֱ������нڵ�
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

