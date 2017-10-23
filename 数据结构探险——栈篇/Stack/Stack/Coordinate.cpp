#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

void Coordinate::printCoordinate()
{
	cout << "(" << m_iX << "," << m_iY << ")" << endl;
}

Coordinate::~Coordinate()
{
}

ostream & operator<<(ostream & out, Coordinate & coor)
{
	// TODO: insert return statement here
	out << "(" << coor.m_iX << "," << coor.m_iY << ")" << endl;
	return out;
}
