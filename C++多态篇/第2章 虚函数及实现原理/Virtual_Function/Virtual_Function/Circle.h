#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include ""
class Circle :public Shape {
public:
	Circle(double r);
	~Circle();
	virtual double calcArea();
protected:
	double m_dR;
	Coordinate
};

#endif 
