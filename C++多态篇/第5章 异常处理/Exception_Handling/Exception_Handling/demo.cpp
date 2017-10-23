#include <iostream>
#include <cstdlib>
#include <string>
#include "IndexException.h"
using namespace std;

void test() {
	throw IndexException();
	throw string("除数不能为0");
}

int main()
{
	try
	{
		test();
	}
	catch (IndexException &e)
	{
		e.printException();
	}
	catch (Exception &e1)
	{
		e1.printException();
	}
	catch (string &str) 
	{
		cout << str << endl;
	}

	system("pause");
	return 0;
}