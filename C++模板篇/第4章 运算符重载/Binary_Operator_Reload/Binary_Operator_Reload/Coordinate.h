#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate
{
	friend Coordinate &operator-(Coordinate &c);
	friend Coordinate operator+(Coordinate c1, Coordinate c2);
	friend ostream &operator<<(ostream &output,Coordinate &coor);
public:
	Coordinate(int x, int y);
//	Coordinate &operator-();
	Coordinate &operator++();
	Coordinate operator++(int);
//	Coordinate operator+(Coordinate &c);
	int getX();
	int getY();
	int operator [](int index);
private:
	int m_iX;
	int m_iY;
};


#endif // !COORDINATE_H
