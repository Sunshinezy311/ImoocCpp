#include <string>
#include <iostream>

using namespace std;

class Teacher{
public:
	Teacher(string name = "Jim", int age = 1, int m = 100);
	Teacher(const Teacher &tea);//��������дҲ���Բ�д

	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};