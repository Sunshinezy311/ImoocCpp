#include "Teacher.h"
#include <iostream>

using namespace std;

//Teacher::Teacher(){
//	m_strName = "Jim";
//	m_iAge = 5;
//	cout << "Teacher()" << endl;
//}
//
//Teacher::Teacher(string name, int age){
//	m_strName = name;
//	m_iAge = age;
//	cout << "Teacher(string name, int age)" << endl;
//
//}
Teacher::Teacher(string name, int age, int m):m_strName(name),m_iAge(age),m_iMax(m){//由于已经在头文件中赋初值了，因此无需在这里再写一遍
//	m_iMax = m;
	cout << "Teacher(string name, int age)" << endl;
}

int Teacher::getMax(){
	return m_iMax;
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
