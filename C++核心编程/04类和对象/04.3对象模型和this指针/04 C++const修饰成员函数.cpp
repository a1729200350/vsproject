#include<iostream>
#include<string>
using namespace std;
//常函数
class Person4
{
public:
	//this 指针本质是指针常量  指针的指向是不可修改的
	//const Person * const this；
	//在成员函数后面加const,修饰的是this 指向，让指针指向的值也不可修改
	void showPerson()const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;//this指针不可以修改指针的指向
	}
	void func4()
	{

	}
	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中也可以修改这个值,加关键字mutable
 };
void test041()
{
	Person4 p;
	p.showPerson();
}
//常对象
void test042()
{
	const Person4 p;
	//p.m_A = 100;
	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改
	//常对象只能调用常对象
	p.showPerson();
	//p.func();//常对象不可以调用普通成员函数 因为普通成员函数可以修改属性
}
int main4()
{
	test041();
	test042();
	system("pause");
	return 0;
}