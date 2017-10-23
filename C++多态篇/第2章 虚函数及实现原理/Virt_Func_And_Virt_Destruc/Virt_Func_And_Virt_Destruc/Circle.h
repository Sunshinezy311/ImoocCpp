#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
class Circle :public Shape {
public:
	Circle(int r);
	~Circle();
//	virtual ~Circle();
//	virtual double calcArea();
protected:
	int m_dR;
};

#endif 
