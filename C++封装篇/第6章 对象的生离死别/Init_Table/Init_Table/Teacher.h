#include <string>
#include <iostream>

using namespace std;

class Teacher{
public:
	/*Teacher();
	Teacher(string name, int age = 20);*/
	Teacher(string name = "Jim", int age = 1, int m = 100);
	void setName(string _name);
	string getName();	
	void setAge(int _age);
	int getAge();
	int getMax();
private:
	string m_strName;
	int m_iAge;
	const int m_iMax;
};