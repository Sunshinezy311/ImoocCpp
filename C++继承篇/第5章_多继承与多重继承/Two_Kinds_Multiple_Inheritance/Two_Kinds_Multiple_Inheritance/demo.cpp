#include <iostream>
#include <stdlib.h>
#include "Infantry.h"
#include "MigrantWorker.h"

void test1(Person p) 
{
	p.play();
}

void test2(Person &p)
{
	p.play();
}

void test3(Person *p)
{
	p->play();
}

int main() 
{
	//Infantry infantry;
	//test1(infantry);
	//test2(infantry);
	//test3(&infantry);
	MigrantWorker *p = new MigrantWorker("Merry","100");
	p->carry();
	p->sow();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}