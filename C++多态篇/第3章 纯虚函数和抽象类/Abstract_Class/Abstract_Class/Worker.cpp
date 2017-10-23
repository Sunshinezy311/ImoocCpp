#include <iostream>
#include "Worker.h"

Worker::Worker(string name, int age) :Person(name)
{
	m_iAge = age;
}

void Worker::work()
{
	cout << "work..." << endl;
}
