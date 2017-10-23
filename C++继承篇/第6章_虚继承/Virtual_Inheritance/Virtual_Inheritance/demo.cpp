#include <iostream>
#include <cstdlib>
#include "MigrantWorker.h"

int main() {
	MigrantWorker *p = new MigrantWorker("Merry", "200", "yellow");
	p->Farmer::printcolor();
	p->Worker::printcolor();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}