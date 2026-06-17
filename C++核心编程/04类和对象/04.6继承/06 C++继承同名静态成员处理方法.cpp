#include <iostream>
#include <string>
//静态成员变量
//1、所有对象都共享同一份数据   
//2、编译阶段分配内存
//3、类内声明 类外初始化
//静态成员函数
//1、只能访问静态成员变量 不能访问非静态成员变量  
//2、所有对象共享同一份数据
using namespace std;
//继承中同名静态成员处理方式
class Base6
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base6 - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base6 - static void func(int a)" << endl;
	}
};
int Base6::m_A=100;
class Son6:public Base6
{
public:
	static int m_A;
	static void func()
	{
	cout << "Son6 - static void func()" << endl;
	}
};
int Son6::m_A = 200;
//同名静态属性
void test061()
{
	//1、通过对象访问
	cout << "通过对象访问： " << endl;
	Son6 s;
	cout << "Son6 下 m_A=" << s.m_A << endl;
	cout << "Base6下 m_A=" << s.Base6::m_A << endl;
	//2、通过类名访问
	cout << "通过类名访问 ：" << endl;
	cout << "Son6 下 m_A=" << Son6::m_A << endl;
	//第一个：：代表通过类名方式访问  第二个：：代表访问父类作用域下
	cout << "Base6下 m_A=" << Son6::Base6::m_A << endl;
}
//同名静态函数
void test062()
{
	//1、通过对象访问
	cout << "通过对象访问" << endl;
	Son6 s;
	s.func();
	s.Base6::func();
	//2、通过类名访问
	cout << "通过类名访问" << endl;
	Son6::func();
	Son6::Base6::func();
	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏同名成员，需要加作用域
	Son6::Base6::func(100);
}
int main6()
{
	//test01();
	test062();
	system("pause");
	return 0;
}