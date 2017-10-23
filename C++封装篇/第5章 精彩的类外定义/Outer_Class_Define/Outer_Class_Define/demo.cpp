#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"//注意！永远也不要引用cpp文件，会报错
using namespace std;

int main(void){
	Teacher t;
	t.setName("孔子");
	t.setGender("男");
	t.setAge(30);
	cout << t.getName() << " " << t.getAge() << " " << t.getGender()<<" ";
	t.teach();
	system("pause");
	return 0;
}