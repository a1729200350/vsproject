#include<iostream>
#include<string>
using namespace std;
//类对象作为类成员  对象成员
//手机类
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone 构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone 析构函数调用" << endl;
	}
	//手机品牌名称
	string m_PName;
	int m_PNumber;
};
//人类
class Person7
{
public:
	//Phone m_Phone=pName  隐式转换法
	Person7(string name, string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Person 构造函数调用" << endl;
	}
	~Person7()
	{
		cout << "Person 析构函数调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};
//当其他类对象作为本类成员，构造时候先构造其他类对象，再构造自身
//析构的顺序与构造相反
void test071()
{
	Person7 p("张三", ("苹果Max"));
	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
}
int main7()
{
	test071();
	system("pause");
	return 0;
}