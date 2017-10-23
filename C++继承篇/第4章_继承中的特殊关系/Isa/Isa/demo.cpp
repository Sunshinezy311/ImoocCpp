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
//	p->work();//无法调用子类的数据成员和成员函数
	
//	Person *p = new Soldier;
//	p->play();
//	delete p;
//	p = NULL;//子类的析构函数没有被执行

	Person p;
	Soldier s;

	test3(&p);
	test3(&s);

	system("Pause");
	return 0;
}