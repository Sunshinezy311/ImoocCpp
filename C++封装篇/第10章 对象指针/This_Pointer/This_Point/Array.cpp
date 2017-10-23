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
Array* Array::printInfo(){//由于在这里相当于重新初始化了一个实例，因此在demo.cpp中即使设置了5也是不会传参到这个实例中的
	cout << this << endl;
	return this;//this是一个指针，而Array类要求返回一个对象，因此用*this

}