#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() 
{
//1.vectors使用
	//vector<int> vec;
	//vec.push_back(3);
	//vec.push_back(4);
	//vec.push_back(5);
	//vec.push_back(6);
	//vec.pop_back();
	//cout << vec.size() << endl;

	//for (int i = 0;i < vec.size();i++)
	//{
	//	cout << vec[i] << endl;
	//}
	//vector<int>::iterator itor = vec.begin();
	//cout << *itor << endl;
	//for (;itor != vec.end();itor++)
	//{
	//	cout << *itor << endl;
	//}

	//cout << vec.front() << endl;
	//cout << vec.back() << endl;
//2.list使用
	//list<int> l1;
	//l1.push_back(4);
	//l1.push_back(6);
	//l1.push_back(8);
	////for (int i = 0;i != l1.size();i++)
	////{
	////	cout << l1[i] << endl;
	////}
	////此方法不能遍历，原因在于l1.size()类型不是int型，因此需要使用迭代器
	//list<int>::iterator itor = l1.begin();
	//for (;itor != l1.end();itor++)
	//{
	//	cout << *itor << endl;
	//}

//3.map的使用
	map<string, string> m;
	pair<string, string> p1("H", "hello");
	pair<string, string> p2("W", "world");
	pair<string, string> p3("B", "BeiJing");
	m.insert(p1);
	m.insert(p2);
	m.insert(p3);
	cout << m["H"] << endl;
	map<string, string>::iterator itor = m.begin();
	for (;itor != m.end();itor++)
	{
		cout <<itor->first<< endl;
		cout << itor->second << endl;
	}
	system("pause");
	return 0;
}