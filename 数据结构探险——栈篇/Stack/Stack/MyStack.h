#include <cstdlib>
#include <iostream>
using namespace std;
#ifndef STACK_H
#define STACK_H

#include "Coordinate.h"
template <typename T>

class MyStack {
public:
	MyStack(int size);
	~MyStack();
	bool StackEmpty();
	bool StackFull();
	void ClearSatck();
	int StackLength();
	bool Push(T elem);
	bool Pop(T &elem);
	void StackTraverse(bool upordown);
private:
	int m_size;
	int m_Top;				//栈顶，栈中元素个数
	T *m_Buffer;			//栈空间指针，改造，形成一个存放坐标的栈
};

template <typename T>
MyStack<T>::MyStack(int size)
{
	m_size = size;
	m_Buffer = new T[size];
	m_Top = 0;
}

template <typename T>
MyStack<T>::~MyStack()
{
	delete[]m_Buffer;
	m_Buffer = NULL;
}

template <typename T>
bool MyStack<T>::StackEmpty()
{

	return m_Top == 0 ? true : false;
}

template <typename T>
bool MyStack<T>::StackFull()
{
	return m_Top == m_size ? true : false;
}

template <typename T>
void MyStack<T>::ClearSatck()
{
	m_Top = 0;
}

template <typename T>
int MyStack<T>::StackLength()
{
	return m_Top;
}

template <typename T>
bool MyStack<T>::Push(T elem)
{
	if (StackFull())
	{
		return false;
	}
	else
	{
		m_Buffer[m_Top] = elem;
		m_Top++;
		return true;
	}
}

template <typename T>
bool MyStack<T>::Pop(T & elem)
{
	if (StackEmpty())
	{
		return false;
	}
	else
	{
		m_Top--;
		elem = m_Buffer[m_Top];
		return true;
	}
	return 0;
}

template <typename T>
void MyStack<T>::StackTraverse(bool upordown)
{
	if(upordown == true){
		for (int i = 0; i != m_Top; i++)
		{
			cout << m_Buffer[i];
			//m_Buffer[i].printCoordinate();
		}
	}
	else {
		for (int i = m_Top-1 ; i >= 0; i--)
		{
			cout << m_Buffer[i];
			//m_Buffer[i].printCoordinate();
		}
	}
}


#endif