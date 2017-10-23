#include "Coordinate.h"
#include <iostream>
using namespace std;
	
int main(void) 
{
	Coordinate coor1(1, 3);
//	cout << coor1.getX() << "," << coor1.getY() << endl;
//	-coor1;
//	cout << coor1.getX() << "," << coor1.getY() << endl;
//	++coor1;
	cout << coor1.getX() << "," << coor1.getY() << endl;
	cout << (coor1++).getX() << "," << (coor1++).getY() << endl;//注意加的时机是不同的
	cout << coor1.getX() << "," << coor1.getY() << endl;
	system("pause");
	return 0;
}