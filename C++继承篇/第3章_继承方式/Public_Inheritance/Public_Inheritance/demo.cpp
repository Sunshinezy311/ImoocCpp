#include <iostream>
#include <stdlib.h>
#include "Worker.h"
//#include "Person.h"
using namespace std;

int main(void) {
	Worker worker;
	worker.work();

	Person person;
//	person.m_strName = "Merry";
	person.eat();

	system("pause");
	return 0;
}