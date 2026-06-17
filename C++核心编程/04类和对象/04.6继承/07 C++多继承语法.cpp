#include <iostream>
#include <string>
using namespace std;

//多继承语法
class Base71
{
public:
	Base71()
	{
		m_A = 100;
	}
	int m_A;
};
class Base72
{
public:
	Base72()
	{
		m_A = 200;
	}
	int m_A;
};
//子类  需要继承Base1和Base2
//语法： class 子类：继承方式 父类，继承方式 父类....
class Son7 :public Base71, public Base72
{
public:
	Son7()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test071()
{
	Son7 s;
	cout << "sizeof Son =" << sizeof(s) << endl;
	//当父类中出现同名成员 ，需要加作用域区分
	cout << "Base1::m_A=" << s.Base71::m_A << endl;
	cout << "Base2::m_A=" << s.Base72::m_A << endl;
} 
int main7()
{
	test071();
	system("pause");
	return 0;
}