#include <iostream>
#include <cstdlib>
#include "Circle.h"
#include "Rect.h"

using namespace std;

int main() {
	Shape *s1 = new Rect(3, 6);
	Shape *s2 = new Circle(5);

	s1->calcArea();
	s2->calcArea();
	delete s1;
	s1 = NULL;
	delete s2;
	s2 = NULL;

	system("pause");
	return 0;
}