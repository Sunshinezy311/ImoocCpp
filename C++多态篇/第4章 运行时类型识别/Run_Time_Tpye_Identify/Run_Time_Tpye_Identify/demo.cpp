#include <iostream>
#include <cstdlib>
#include "Bird.h"
#include "Plane.h"
using namespace std;

void doSomething(Flyable *obj) 
{
	cout << typeid(*obj).name() << endl;//��ӡ������Ķ���ָ����һ��ʲô����
	obj->takeoff();//����Flyable�ĺ���
	if (typeid(*obj) == typeid(Bird)) {//�ж�������Ķ�����ʲô�࣬�����Bird��
		Bird *bird = dynamic_cast<Bird *>(obj);//��objָ��ͨ��dynamic_castת��ΪBirdָ�����ͣ�����ָ�븳ֵ���µ�����Bird
		bird->foraging();//
	}
	if (typeid(*obj) == typeid(Plane)) {//�����Plane��
		Plane *plane = dynamic_cast<Plane *>(obj);//��objָ��ͨ��dynamic_castת��ΪPlaneָ�����ͣ�����ָ�븳ֵ���µ�����Plane
		plane->carry();
	}
	obj->land();//����Flyable�ĺ���
}

int main(void) {
	
	//1.typeid�Ĺ���
	int i = 0;
	cout << typeid(i).name() << endl;
	Flyable *p = new Bird();
	cout << typeid(p).name() << endl;//�ع�֮ǰ�麯��ԭ��
	cout << typeid(*p).name() << endl;

	//2. dynamic����ת��ע�⣬��Ա���������Ƕ�̬
	Plane a;
	Bird b;
	doSomething(&a);
	doSomething(&b);

	system("pause");
	return 0;
}