#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

void test(Teacher t){

}

int main(void){
	Teacher t1;
	//Teacher *p = new Teacher;//
	//delete p;//相当于调用析构函数
	Teacher t2(t1);//有两个析构函数


	system("pause");
	return 0;
}