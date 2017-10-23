#ifndef LIST_H
#define LIST_H

class SeqList {
public:
	SeqList(int size);
	~SeqList();
	void Clear_List();
	bool Is_Empty();
	bool Is_Full();
	int List_Length();
	bool Get_Elem(int i, int *e);
	int Locate_Elem(int *e);
	bool Prior_Elem(int *cur_elem, int &temp);
	bool Next_Elem(int *cur_elem, int &temp);
	bool List_Insert(int i, int *elem);
	bool List_Delete(int i, int *elem);
	void List_Traverse();


private:
	int *m_pList;
	int m_iSize;
	int m_iLength;
};
#endif // !LIST_H

