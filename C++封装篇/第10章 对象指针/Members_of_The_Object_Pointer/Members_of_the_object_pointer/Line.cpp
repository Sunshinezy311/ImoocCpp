#include "Line.h"
#include <iostream>
using namespace std;

Line::Line(int x1, int y1, int x2, int y2)
{
	m_pcoorA = new Coordinate(x1, y1);
	m_pcoorB = new Coordinate(x2, y2);
	cout << "Line()" << endl;
}

Line::~Line()
{
	delete m_pcoorA;
	m_pcoorA = NULL;
	delete m_pcoorB;
	m_pcoorB = NULL;
	cout << "~Line()" << endl;
}

void Line::printInfo(){
	cout << "printInfo()" << endl;
	cout << "(" << m_pcoorA->getX() << "," << m_pcoorA->getY() << ")" << endl;
	cout << "(" << m_pcoorB->getX() << "," << m_pcoorB->getY() << ")" << endl;

}
