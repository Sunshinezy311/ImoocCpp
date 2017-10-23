#include <iostream>
#include <cstdlib>
#include "Circle.h"

using namespace std;

int main() {
	Shape shape;//
//	cout << sizeof(shape) << endl;
	int *p = (int*)&shape;
//	cout << &shape << endl;
//	cout << p << endl;
	cout << *p << endl;

	Circle circle(100);
//	cout << sizeof(circle) << endl;
	int *q = (int*)&circle;
//	cout << &circle << endl;
//	cout << q << endl;
	cout << *q << endl;
	q++;
	cout << *q << endl;


	system("pause");
	return 0;
}