#include <iostream>
#include "Coordinate.h"

using namespace std;

Coordinate::Coordinate(){
	cout << "Coordinate()" << m_iX << "," << m_iY << endl;
}
Coordinate::~Coordinate(){
	cout << "~Coordinate()" << m_iX << "," << m_iY << endl;
}
