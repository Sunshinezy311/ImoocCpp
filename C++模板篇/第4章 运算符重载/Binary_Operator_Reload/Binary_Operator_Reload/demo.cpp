#include "Coordinate.h"
#include <iostream>

using namespace std;

int main(void) 
{
	Coordinate coor1(1, 3);
	Coordinate coor2(2, 4);
	Coordinate coor3(0, 0);

	coor3 = coor1 + coor2;
	cout << coor3.getX() << "," << coor3.getY() << endl;
	cout << coor3[0] << endl;
	system("pause");
	return 0;
}