#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(void){
	string name;
	cout << "Please Input your name:" << endl;
	getline(cin, name);
	if (name.empty()){
		cout << "Input is NULL!" << endl;
		system("pause");
		return 0;
	}
	if (name == "zy"){
		cout << "You are an administrator." << endl;
	}
	cout << "Hello " + name << endl;
	cout << "Your name length is :" << name.size() << endl;
	cout << "Your name first letter is :" << name[0] << endl;
	system("pause");
	return 0;
}