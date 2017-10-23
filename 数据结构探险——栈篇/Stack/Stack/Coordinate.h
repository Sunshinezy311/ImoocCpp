#ifndef COORDINATE_H
#define COOEDINATE_H

#include <iostream>
using namespace std;

class Coordinate
{
	friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
	Coordinate(int x = 0, int y = 0);
	void printCoordinate();
	~Coordinate();

private:
	int m_iX;
	int m_iY;
};

#endif 
