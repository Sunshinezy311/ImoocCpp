#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

int main(void){
	//Teacher t1;//
	//cout << t1.getName() << " " << t1.getAge() << endl;
	//Teacher t2("Merry", 15);
	//cout << t2.getName() << " " << t2.getAge() << endl;
	//Teacher t3("James");
	//cout << t3.getName() << " " << t3.getAge() << endl;
	Teacher t1("Merry",12,150);
	cout << t1.getName() << " " << t1.getAge() <<" "<<t1.getMax()<< endl;


	system("pause");
	return 0;
}