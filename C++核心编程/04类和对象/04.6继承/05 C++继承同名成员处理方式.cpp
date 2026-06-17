#include <iostream>
#include <string>
using namespace std;
//继承中同名成员处理方式
class Base5
{
public:
	Base5()
	{
		m_A = 100;
	}
	int m_A;
	void func()
	{
		cout << "Base5 -func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Base5 -func(int a)调用" << endl;
	}
};
class Son5 :public Base5
{
public:
	Son5()
	{
		m_A = 200;
	}
	int m_A;
	void func()
	{
		cout << "Son5 -func()调用" << endl;
	}
};
//同名成员属性处理放方式
void test051()
{
	Son5 s;
	cout << "Son m_A = " << s.m_A << endl;
	//如果通过子类对象 访问到父类中同名成员，需要加作用域
	cout << "Base m_A = " << s.Base5::m_A << endl;
}
//同名成员函数处理方式
void test052()
{
	Son5 s;
	s.func();//直接调用  调用是子类中的同名成员
		//如何调用到父类中同名成员函数
	s.Base5::func();
	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果像访问到父类中被隐藏的同名成员函数，需要加作用域
	s.Base5::func(100);
}
int main5()
{
	test051();
	test052();
	system("pause");
	return 0;
}