#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

int main(){
	Array arr1(10);
//	cout << arr1.getLen() << endl;
//	arr1.printInfo()->setLen(5)->printInfo();//���ﲢû�иı�arr1��ֵ
	arr1.printInfo();
	cout << &arr1 << endl;
	system("pause");
	return 0;
}