#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//常用查找算法find_if
//1、查找内置数据类型

class GreaterFive2
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test021()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive2());
	if (it == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到数字大于5的数字为：" << *it << endl;
	}
}
//2、查找自定义数据类型
class Person2
{
public:
	Person2(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//bool operator ==(Person& p)
	//{
	//	if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
	//	{
	//		return true;
	//	}
	//	return false;
	//}
	string m_Name;
	int m_Age;
};
class Greater20
{
public:
	bool operator()(Person2&p)
	{
		return	p.m_Age > 20;
	}
};
void test022()
{
	vector<Person2>v;
	//创建数据
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	//年龄大于20的人
	vector<Person2>::iterator it =find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "没有年龄大于20的人！" << endl;
	}
	else
	{
		cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
	}
}
int main2()
{

	//test021();
	test022();
	system("pause");
	return 0;
}