#include <iostream>
#include <stdlib.h>
using namespace std;

//#define X 3

void fun(const int &a,const int &b);

int main(void){
	int x = 3;//��궨����ȿ��Բ��
	int y = 5;
//	x = 5;
//	int const *p = &x; //const int *p= &x;
//	*p = 5;//����	1	error C3892: ��p��: ���ܸ�������ֵ
//	int * const p = &x;
//	p = &y;//����	1	error C3892: ��p��: ���ܸ�������ֵ
//	*p = 10;
//	int const *p = &x;
//	cout << *p << endl;
//	p = &y;
//	cout << *p << endl;
	
	int const &z = x;
	fun(x, y);
	system("pause");
	return 0;
}

void fun(const int &a, const int &b){
//	a = 10;
//	b = 20;
} 