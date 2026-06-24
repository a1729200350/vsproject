#include <iostream>
#include<string>
using namespace std;
//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建
class Person131
{
public:
	void showPerson131()
	{
		cout << "Person131 show" << endl;
	}
};
class Person232
{
public:
	void showPerson232()
	{
		cout << "Person232 show" << endl;
	}
};
template <class T>
class MyClass3
{
public:
	T obj;
	//类模板中成员函数
	void func13()
	{
		obj.showPerson131();
	}
	void func23()
	{
		obj.shouwPerson232();
	}
};
void test031()
{
	MyClass3<Person131>m;
	m.func13();
	//m.func23();
}
int main3()
{
	test031();
	system("pause");
	return 0;
}