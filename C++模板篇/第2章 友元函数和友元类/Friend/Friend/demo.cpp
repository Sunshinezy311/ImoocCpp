#include <iostream>
#include <cstdlib>
#include "Time.h"


using namespace std;

//void printTime(Time &t);

int main() 
{
	Time t(6, 34, 25);
	Match m;
	m.printTime(t);
	system("pause");
	return 0;
}

//void printTime(Time &t) 
//{
//	cout << t.m_iHour <<":"<< t.m_iMinute <<":"<< t.m_iSecond << endl;
//}