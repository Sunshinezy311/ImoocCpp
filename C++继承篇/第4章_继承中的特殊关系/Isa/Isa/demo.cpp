#include <iostream>
#include <cstdlib>
#include "Soldier.h"

void test1(Person p) {
	p.play();
}

void test2(Person &p) {
	p.play();
}

void test3(Person *p) {
	p->play();
}

int main(void) 
{
//	Soldier soldier;
//	Person *p = &soldier;
//	p->play();
//	p->work();//�޷�������������ݳ�Ա�ͳ�Ա����
	
//	Person *p = new Soldier;
//	p->play();
//	delete p;
//	p = NULL;//�������������û�б�ִ��

	Person p;
	Soldier s;

	test3(&p);
	test3(&s);

	system("Pause");
	return 0;
}