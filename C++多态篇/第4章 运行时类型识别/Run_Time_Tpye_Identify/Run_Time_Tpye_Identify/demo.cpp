#include <iostream>
#include <cstdlib>
#include "Bird.h"
#include "Plane.h"
using namespace std;

void doSomething(Flyable *obj) 
{
	cout << typeid(*obj).name() << endl;//打印所传入的对象指针是一个什么类型
	obj->takeoff();//调用Flyable的函数
	if (typeid(*obj) == typeid(Bird)) {//判断所传入的对象是什么类，如果是Bird类
		Bird *bird = dynamic_cast<Bird *>(obj);//则将obj指针通过dynamic_cast转换为Bird指针类型，并将指针赋值给新的类型Bird
		bird->foraging();//
	}
	if (typeid(*obj) == typeid(Plane)) {//如果是Plane类
		Plane *plane = dynamic_cast<Plane *>(obj);//则将obj指针通过dynamic_cast转换为Plane指针类型，并将指针赋值给新的类型Plane
		plane->carry();
	}
	obj->land();//调用Flyable的函数
}

int main(void) {
	
	//1.typeid的功能
	int i = 0;
	cout << typeid(i).name() << endl;
	Flyable *p = new Bird();
	cout << typeid(p).name() << endl;//回顾之前虚函数原理
	cout << typeid(*p).name() << endl;

	//2. dynamic类型转换注意，成员函数必须是多态
	Plane a;
	Bird b;
	doSomething(&a);
	doSomething(&b);

	system("pause");
	return 0;
}