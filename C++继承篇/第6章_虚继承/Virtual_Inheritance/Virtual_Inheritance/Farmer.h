#include <string>
#include "Person.h"
using namespace std;

class Farmer: virtual public Person {//�γ�����̳�
public:
	Farmer(string name = "Jack", string color = "green");
	virtual~Farmer();
	void sow();
protected:
	string m_strName;
};
