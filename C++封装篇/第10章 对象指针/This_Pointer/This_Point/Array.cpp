#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int len){
	this->len = len;
}
Array::~Array(){
}

Array* Array::setLen(int len){
	this->len = len;
	return this;
}
int Array::getLen(){
	return len;
}
Array* Array::printInfo(){//�����������൱�����³�ʼ����һ��ʵ���������demo.cpp�м�ʹ������5Ҳ�ǲ��ᴫ�ε����ʵ���е�
	cout << this << endl;
	return this;//this��һ��ָ�룬��Array��Ҫ�󷵻�һ�����������*this

}