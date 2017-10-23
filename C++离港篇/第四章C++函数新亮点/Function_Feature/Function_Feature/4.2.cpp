#include <iostream>
#include <stdlib.h>
using namespace std;

inline void fun(int i = 30, int j = 20, int k = 10);
inline void fun(double i, double j);

int main(void){
	fun(100);
	fun(100, 200);
	fun(100, 200, 300);
	fun(1.23123, 2.12312);
	system("pause");
	return 0;
}

void fun(int i, int j, int k){
	cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j){
	cout << i << "," << j << endl;
}
