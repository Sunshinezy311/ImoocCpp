#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
void display(T a)
{
	cout << a << endl;
}

template<typename T, class S>
void display(T t, S s)
{
	cout << t << endl;
	cout << s << endl;
}

template<typename T, int KSize>
void display(T a)
{
	for (int i = 0;i < KSize;i++)
	{
		cout << a << endl;
	}
}

int main()
{
	display(10.89);
	display(5, 8.37);
	display<int, 5>(6);
	system("pause");
	return 0;
}