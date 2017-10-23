#include "Circle.h"

Circle::Circle(double r)
{
	m_dR = r;
	m_pCenter = new Coordinate(3, 5);
	cout << "Circle()" << endl;
}

Circle::~Circle()
{
	delete m_pCenter;
	m_pCenter = NULL;
	cout << "~Circle()" << endl;
}

double Circle::calcArea()
{
	cout << "Circle::calcArea()" << endl;
	return 3.14*m_dR*m_dR;
}
