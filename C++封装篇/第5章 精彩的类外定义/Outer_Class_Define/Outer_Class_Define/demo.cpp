#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"//ע�⣡��ԶҲ��Ҫ����cpp�ļ����ᱨ��
using namespace std;

int main(void){
	Teacher t;
	t.setName("����");
	t.setGender("��");
	t.setAge(30);
	cout << t.getName() << " " << t.getAge() << " " << t.getGender()<<" ";
	t.teach();
	system("pause");
	return 0;
}