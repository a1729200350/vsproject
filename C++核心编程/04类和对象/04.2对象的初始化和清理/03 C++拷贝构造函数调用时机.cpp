#include<iostream>
#include<string>
using namespace std;

class Person3
{
public:
	Person3()
	{
		cout << "Person默认构造函数调用" << endl;
	}
	Person3(int age)
	{
		cout << "Person有参构造函数调用" << endl;
		m_Age = age;
	}
	Person3(const Person3 &p)
	{
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Person3()
	{
		cout << "Person默认析构函数调用" << endl;
	}
//private:
	int m_Age;
};
//拷贝构造函数调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test031()
{
	Person3 p1(20);
	Person3 p2(p1);
	cout << "p2的年龄为：" <<p2.m_Age<< endl;
}
//2、值传递方式给函数参数传值
void doWork(Person3 p)
{

}
void test032()
{
	Person3 p;
	doWork(p);
}
//3、值方式返回局部对象
Person3 doWork2()
{
	Person3 p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person3 p = doWork2();
	cout << (int*)&p << endl;
}
int main3()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}