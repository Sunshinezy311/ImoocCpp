#include <cstdlib>
#include <iostream>
#include "MyArray.h"
using namespace std;

int main() 
{
	MyArray<int, 5, 6>arr;
	arr.display();
	system("pause");
	return 0;
}