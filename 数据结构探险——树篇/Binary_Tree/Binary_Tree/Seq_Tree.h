#ifndef SEQ_TREE_H
#define SEQ_TREE_H
/*
��ƣ�ʹ������ķ�ʽʵ��������ô������±꣨����������Ԥ��λ�ã�����������ʽΪ
			   [0]

		 [1]	      [2]
	
	  [3]   [4]	   [5]    [6]

	  ��ô�Ա��1Ϊ����	������Ϊ1*2+1
						���Һ���Ϊ1*2+2
	  ����û�к��ӵĽڵ㣬����Ϊ0
*/
class Seq_Tree 
{
public:
	Seq_Tree(int size, int *pRoot);
	~Seq_Tree();
	int *Search_Node(int nodeIndex);
	bool Add_Node(int nodeIndex, int direction, int *pNode);//direction��ָ���ӻ����Һ��ӣ�0Ϊ��1Ϊ��
	bool Del_Node(int nodeIndex, int *pNode);
	void Tree_Traverse();

private:
	int *m_pTree;
	int m_iSize;//���ڱ����������Ĵ�С
};
#endif // !SEQ_TREE_H
