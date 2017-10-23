#ifndef SEQ_TREE_H
#define SEQ_TREE_H
/*
设计：使用数组的方式实现树，那么数组的下标（）就是树的预设位置，假设树的形式为
			   [0]

		 [1]	      [2]
	
	  [3]   [4]	   [5]    [6]

	  那么以标号1为例，	其左孩子为1*2+1
						其右孩子为1*2+2
	  对于没有孩子的节点，则标记为0
*/
class Seq_Tree 
{
public:
	Seq_Tree(int size, int *pRoot);
	~Seq_Tree();
	int *Search_Node(int nodeIndex);
	bool Add_Node(int nodeIndex, int direction, int *pNode);//direction是指左孩子还是右孩子，0为左1为右
	bool Del_Node(int nodeIndex, int *pNode);
	void Tree_Traverse();

private:
	int *m_pTree;
	int m_iSize;//用于标记整个数组的大小
};
#endif // !SEQ_TREE_H
