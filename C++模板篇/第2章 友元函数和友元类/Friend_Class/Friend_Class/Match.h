#ifndef STUDENT_H
#define STUDENT_H

#include "Time.h"
//class Time;//��ʾ֮����и��࣬�Ȳ�����
class Match {
public:
	Match(int hour, int min, int sec);
	void testTime();
private:
	Time m_tTimer;
};
#endif // !STUDENT_H
