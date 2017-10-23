#include <iostream>
#include <stdlib.h>
using namespace std;

void fun(const int &a, const int &b);

int main(void){
	int *p = new int(20);
	if (NULL == p){
		system("pause");
		return 0;
	}
	int *q = new int[1000];
	*p = 20;//上下是等价的
	if (NULL == q){
		system("pause");
		return 0;
	}
	q[0] = 10;
	q[1] = 20;

	cout << *p << endl;
	cout << p[0] << "," << p[1] << endl;

	delete p;
	p = NULL;

	delete[]q;
	q = NULL;
	system("pause");
	return 0;
}