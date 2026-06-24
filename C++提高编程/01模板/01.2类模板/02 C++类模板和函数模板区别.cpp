#include <iostream>
#include<string>
using namespace std;
//类模板与函数模板区别
template<class NameType, class AgeType = int>
class Person2
{
public:
	Person2(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson2()
	{
		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
//1、类模板没有自动类型推导使用方式
void test021()
{
	//Person2 p("孙悟空", 1000);   //  c++ 17    错误，无法用自动类型推导
	Person2<string, int>p("孙悟空", 1000);  //正确,只能用显示指定类型
	p.showPerson2();
}
//2、类模板在模板参数列表中可以有默认参数
void test022()
{
	Person2<string>p("猪八戒", 999);
	p.showPerson2();
}
int main2()
{
	test021();
	test022();
	system("pause");
	return 0;
}