#include <iostream>
#include <stdlib.h>
using namespace std;

//#define X 3

void fun(const int &a,const int &b);

int main(void){
	int x = 3;//与宏定义相比可以查错
	int y = 5;
//	x = 5;
//	int const *p = &x; //const int *p= &x;
//	*p = 5;//错误	1	error C3892: “p”: 不能给常量赋值
//	int * const p = &x;
//	p = &y;//错误	1	error C3892: “p”: 不能给常量赋值
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