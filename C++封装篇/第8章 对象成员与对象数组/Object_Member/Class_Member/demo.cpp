#include <iostream>
#include <cstdlib>
//#include "Coordinate.h"ע�����д��벻���ٴ����ã�������û�����ض��壡
#include "Line.h"
using namespace std;

int main(void){
	Line *p = new Line(1, 2, 3, 4);
	p->printInfo();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}