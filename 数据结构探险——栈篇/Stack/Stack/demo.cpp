#include "MyStack.h"
#include <iostream>
using namespace std;

#define BINARY		2
#define OCTONARY	8
#define HEXADECTMAL	16
//设计一个通用模板类，使得栈内可以存储各类数据

int main(void)
{
//1.test
	//MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);
	//pStack->Push(Coordinate(1, 3));
	//pStack->Push(Coordinate(2, 4));
	//pStack->Push(Coordinate(3, 5));
	//pStack->Push(Coordinate(4, 6));
	//pStack->Push(Coordinate(5, 7));

	//pStack->StackTraverse();

	//cout << pStack->StackLength() << endl;

	//delete pStack;
	//pStack = NULL;

//2.base convert
	//char num[] = "0123456789ABCDEF";

	//MyStack<int> *pstack = new MyStack<int>(30);
	//int N = 2016, temp = 0;
	//while (N != 0) 
	//{
	//	temp = N % HEXADECTMAL;
	//	pstack->Push(temp);
	//	N /= HEXADECTMAL;
	//}
	////pstack->StackTraverse(false);
	//int elem;
	//while (!pstack->StackEmpty()) {
	//	pstack->Pop(elem);
	//	cout << num[elem];
	//}
	//delete pstack;
	//pstack = NULL;

//3.bracket match or not
	MyStack<char> *pStack = new MyStack<char>(30);
	MyStack<char> *pNeedStack = new MyStack<char>(30);
	
	char str[] = "{[()]}{{";

	char CurrentNeed = 0;

	for (int i = 0; i < strlen(str); i++) 
	{
		if (str[i] != CurrentNeed) 
		{
			pStack->Push(str[i]);
			switch (str[i])
			{
			case '{':
				if (CurrentNeed != 0)
				{
					pNeedStack->Push(CurrentNeed);
				}
				CurrentNeed = '}';
				break;
			case '[':
				if (CurrentNeed != 0)
				{
					pNeedStack->Push(CurrentNeed);
				}
				CurrentNeed = ']';
				break;
			case '(':
				if (CurrentNeed != 0)
				{
					pNeedStack->Push(CurrentNeed);
				}
				CurrentNeed = ')';
				break;
			}
		}
		else
		{
			char elem;
			pStack->Pop(elem);
			pNeedStack->Pop(CurrentNeed);
		}
	}

	if (pStack->StackEmpty()) 
	{
		cout << "字符串括号匹配" << endl;
	}
	else if(!pStack->StackEmpty())
	{
		cout << "字符串括号不匹配" << endl;
	}

	delete pStack;
	pStack = NULL;

	delete pNeedStack;
	pNeedStack = NULL;


	system("pause");
	return 0;
}