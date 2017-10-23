#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

//Coordinate & Coordinate::operator-()
//{
//	// TODO: insert return statement here
//	this->m_iX = -this->m_iX;
//	m_iY = -m_iY;
//	return *this;
//}

Coordinate & operator-(Coordinate & c)
{
	// TODO: insert return statement here
	c.m_iX = -c.m_iX;
	c.m_iY = -c.m_iY;
	return c;
}


Coordinate & Coordinate::operator++()
{
	// TODO: insert return statement here
	m_iX++;
	m_iY++;
	return *this;
}

Coordinate Coordinate::operator++(int)
{
	// TODO: insert return statement here
	Coordinate old(*this);
	this->m_iX++;
	this->m_iY++;
	return old;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}

