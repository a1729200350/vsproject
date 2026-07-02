#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//常用查找算法count_if
//统计内置数据类型
class Great20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	int num =count_if(v.begin(), v.end(), Great20());
	cout << "容器中大于20元素的个数:" << num << endl;
}
//统计自定义数据类型
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class AgeGreater20
{
public:
	bool operator ()(const Person& p)
	{
		return p.m_Age > 20;
	}
};
void test02()
{
	vector<Person>v;
	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 20);
	Person p5("曹操", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//统计 大于20岁人员个数
	int num = count_if(v.begin(), v.end(), AgeGreater20());
	cout << "大于20岁人员个数：" << num << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}