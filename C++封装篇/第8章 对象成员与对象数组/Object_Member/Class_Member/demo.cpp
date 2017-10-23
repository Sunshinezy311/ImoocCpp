#include <iostream>
#include <cstdlib>
//#include "Coordinate.h"注意这行代码不能再次引用，如果引用会造成重定义！
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