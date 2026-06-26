#include<iostream>
#include<string>
#include <vector>
using namespace std;
//vector 容器存放自定义数据类型
class Person2
{
public:
	Person2(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void test021()
{
	vector<Person2> v;
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//遍历容器中的数据
	for (vector<Person2>::iterator it = v.begin();it != v.end();it++)
	{
		//cout << "姓名：" <<(*it).m_Name<<"年龄："<<(*it).m_Age << endl;
		cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
	}
}
//存放自定义数据类型 指针
void test022()
{
	vector<Person2*> v;
	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);
	Person2 p5("eee", 50);
	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	//遍历容器
	for (vector<Person2*>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "::姓名：" << (*it)->m_Name << "年龄：" << (*it)->m_Age << endl;
	}
}
int main2()
{
	//test021();
	test022();
	system("pause");
	return 0;
}