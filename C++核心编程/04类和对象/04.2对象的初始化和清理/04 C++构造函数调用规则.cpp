#include<iostream>
#include<string>
using namespace std;
//构造函数的调用规则
//1、创建一个了类,C++编译器会给每个类都添加至少三个类
//默认构造函数（空实现）
//析构函数（空实现）
//拷贝构造函数（值拷贝）
//2、如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
//如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数
class Person4
{
public:
	Person4()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	//Person4(int age)
	//{
	//	cout << "Person的有参构造函数调用" << endl;
	//	m_Age = age;
	//}
	Person4(const Person4& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Person4()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
};
//void test041()
//{
//	Person4 p;
//	p.m_Age = 18;
//	Person4 p2(p);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
void test042()
{
	Person4 p;
	Person4 p2(p);
	cout << "p2的年龄为：" << p2.m_Age << endl;

}
int main4()
{
	//test041();
	test042();
	system("pause");
	return 0;
}