#ifndef STUDENT_H
#define STUDENT_H

#include "Time.h"
//class Time;//表示之后会有该类，先不声明
class Match {
public:
	Match(int hour, int min, int sec);
	void testTime();
private:
	Time m_tTimer;
};
#endif // !STUDENT_H
