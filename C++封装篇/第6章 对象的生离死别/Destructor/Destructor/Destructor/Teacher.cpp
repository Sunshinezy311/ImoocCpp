#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher(string name, int age, int m) :m_strName(name), m_iAge(age){//由于已经在头文件中赋初值了，因此无需在这里再写一遍
	cout << "Teacher(string name, int age)" << endl;
}

Teacher::Teacher(const Teacher &tea){
	cout << "Teacher(const Teacher &tea)" << endl;
}

Teacher::~Teacher(){
	cout << "~Teacher()" << endl;
	system("pause");
}

void Teacher::setName(string _name){
	m_strName = _name;
}

string Teacher::getName(){
	return m_strName;
}

void Teacher::setAge(int _age){
	m_iAge = _age;
}

int Teacher::getAge(){
	return m_iAge;
}
