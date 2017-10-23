#include <iostream>
#include <cstdlib>
#include "Time.h"

#include "Match.h"

using namespace std;

//void printTime(Time &t);

int main() 
{
	Match m(6, 24, 28);
	m.testTime();
	system("pause");
	return 0;
}

//void printTime(Time &t) 
//{
//	cout << t.m_iHour <<":"<< t.m_iMinute <<":"<< t.m_iSecond << endl;
//}