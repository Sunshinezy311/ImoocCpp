#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
	Person(string color = "red");
	virtual ~Person();
	void printcolor();
protected:
	string m_strColor;

};

#endif // DEBUG
