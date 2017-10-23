#include <iostream>
#include <cstdlib>
#include "Soldier.h"

int main(void) 
{
	Soldier soldier;
	soldier.work();
	soldier.play(7);
	
	soldier.Person::play();
	system("pause");
	return 0;
}