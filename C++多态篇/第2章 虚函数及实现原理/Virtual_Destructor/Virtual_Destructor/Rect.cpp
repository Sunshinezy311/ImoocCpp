#include "Rect.h"

Rect::Rect(double width, double height)
{
	m_dWidth = width;
	m_dHeight = height;
	cout << "Rect()" << endl;
}

Rect::~Rect()
{
	cout << "~Rect()" << endl;
}

double Rect::caleArea()
{
	cout << "Rect::caleArea()" << endl;
	return m_dWidth*m_dHeight;
}
