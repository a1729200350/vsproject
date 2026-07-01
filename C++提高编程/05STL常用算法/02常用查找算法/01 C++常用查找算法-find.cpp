#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//常用查找算法 
// find
//查找内置数据类型
void test011()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	//查找 容器中 是否有5 这个元素
	vector <int>::iterator it=find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl; 
	}
}
class Person1
{
public:
	Person1( string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载 == 底层find知道如何对比person数据类型
	bool operator ==(const Person1& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};
//查找 自定义数据类型
void test012()
{
	vector <Person1>v;
	//创建数据
	Person1 p1("aaa", 10);
	Person1 p2("bbb", 20);
	Person1 p3("ccc", 30);
	Person1 p4("ddd", 40);
	//放入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	Person1 pp("bbb", 20);
	vector<Person1>::iterator it=find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "姓名: " << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}
int main1()
{
	test011();
	test012();
	system("pause");
	return 0;
}