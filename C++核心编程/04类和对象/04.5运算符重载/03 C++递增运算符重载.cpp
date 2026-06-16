#include <iostream>
#include<string>
using namespace std;
//重载递增运算符
//自定义整型
class MyInteger3
{
	friend ostream& operator<<(ostream& cout, MyInteger3 myint);
public:
	MyInteger3()
	{
		m_Num=0;
	}
	//重载前置++运算符		返回引用是为了一直对一个数据进行操作
	MyInteger3& operator++()
	{
		//先进行++运算
		m_Num++;
		//再将自身做返回
		return *this;
	}
	//重载后置++运算符
	//void operator++(int)  int 代表占位参数，可以用于区分前置和后置递增
	MyInteger3 operator++(int)
	{
		//先 记录当前结果
		MyInteger3 temp = *this;
		//后 递增
		m_Num++;
		//最后将结果做返回
		return temp;
	}
private:
	int m_Num;
};
//重载左移运算符
ostream& operator<<(ostream& cout, MyInteger3 myint)
{
	cout << myint.m_Num;
	return cout;
}
void test031()
{
	MyInteger3 myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test032()
{
	MyInteger3 myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main3()
{
	//test01();
	test032();
	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;
	system("pause");
	return 0;
}