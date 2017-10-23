#include <iostream>
#include "FighterPlane.h"
using namespace std;

FighterPlane::FighterPlane(string code):Plane(code)
{
}

void FighterPlane::takeoff()
{
	cout << "Fighter -- takeoff" << endl;
}

void FighterPlane::land()
{
	cout << "FighterPlane -- land" << endl;
}
