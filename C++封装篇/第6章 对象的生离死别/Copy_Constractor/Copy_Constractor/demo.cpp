#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

void test(Teacher t){

}

int main(void){
	Teacher t1;
	test(t1);//可以用于参数传递
	Teacher t2 = t1;
	Teacher t3(t1);
//	cout << t1.getName() << " " << t1.getAge() << " " <<endl;


	system("pause");
	return 0;
}