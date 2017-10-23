#include "Worker.h"
#include <iostream>

Worker::Worker(string code, string color):Person("Worker"+color)
{
	m_strCode = code;
//	m_strColor = color;
	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::carry()
{
	cout << m_strCode << endl;
	cout << "Worker -- carry()" << endl;
}
