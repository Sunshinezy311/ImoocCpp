#include "Tank.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
	cout << Tank::getCount() << endl;

	Tank *t1 = new Tank('A');
	Tank *t2 = new Tank('B');
	cout << Tank::getCount() << endl;
	cout << t1->getCount() << endl;
	delete t1;
	t1 = NULL;
	cout << Tank::getCount() << endl;
	system("pause");
	return 0;
}