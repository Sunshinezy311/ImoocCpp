#include "Seq_Tree.h"
#include "Link_Tree.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	/*1.顺序存储
	int root = 1234;
	int node1 = 12;
	int node2 = 34;
	int node3 = 1;
	int node4 = 2;
	int node5 = 3;
	int node6 = 4;
	Seq_Tree *ptree = new Seq_Tree(7,&root);
	ptree->Add_Node(0, 0, &node1);
	ptree->Add_Node(0, 1, &node2);

	ptree->Add_Node(1, 0, &node3);
	ptree->Add_Node(1, 1, &node4);

	ptree->Add_Node(2, 0, &node5);
	ptree->Add_Node(2, 1, &node6);

	ptree->Tree_Traverse();
	delete ptree;
	ptree = NULL;
	*/

	/*2.链式存储*/
	/*
	设计：使用数组的方式实现树，那么数组的下标（）就是树的预设位置，假设树的形式为
					  [0]

			  5[1]	          8[2]
	
		  2[3]    6[4]	   9[5]    7[6]

	前序遍历结果：0 1 3 4 2 5 6
	中序遍历结果：3 1 4 0 5 2 6
	后序遍历结果：3 4 1 5 6 2 0

	*/
	Node<int> *node1 = new Node<int>();
	node1->index = 1;
	node1->data = 5;

	Node<int> *node2 = new Node<int>();
	node2->index = 2;
	node2->data = 8;

	Node<int> *node3 = new Node<int>();
	node3->index = 3;
	node3->data = 2;

	Node<int> *node4 = new Node<int>();
	node4->index = 4;
	node4->data = 6;

	Node<int> *node5= new Node<int>();
	node5->index = 5;
	node5->data = 9;

	Node<int> *node6 = new Node<int>();
	node6->index = 6;
	node6->data = 7;

	Link_Tree<int> *ptree = new Link_Tree<int>();
	ptree->Add_Node(0, 0, node1);
	ptree->Add_Node(0, 1, node2);

	ptree->Add_Node(1, 0, node3);
	ptree->Add_Node(1, 1, node4);
	
	ptree->Add_Node(2, 0, node5);
	ptree->Add_Node(2, 1, node6);

	ptree->Tree_Inorder_Traverse();

	delete ptree;
	ptree = NULL;

	system("pause");
	return 0;
}
