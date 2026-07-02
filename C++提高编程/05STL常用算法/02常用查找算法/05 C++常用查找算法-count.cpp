#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//常用查找算法 count
//1、统计内置数据类型
void test051()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(10);
	int num = count(v.begin(), v.end(), 40);
	cout << "40的元素个数为：" << num << endl;
}
//2、统计自定义数据类型
class Person5
{
public:
	Person5(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator ==(const Person5& p)
	{
		//if (this->m_Age == p.m_Age)
		//{
		//	return true;
		//}
		//return false;
		return this->m_Age == p.m_Age;
	}
	string m_Name;
	int m_Age;
};
void test052()
{
	vector<Person5>v;
	Person5 p1("刘备", 35);
	Person5 p2("关羽", 35);
	Person5 p3("张飞", 35);
	Person5 p4("赵云", 30);
	Person5 p5("曹操", 40);
	Person5 p6("诸葛亮", 32);
	Person5 p("周瑜", 35);
	//将人员插入到容器v中
	v.push_back(p);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);
	int num = count(v.begin(), v.end(), p);
	cout << "和周瑜相同年龄的人有" << num << "个" << endl;

}
int main5()
{
	//test051();
	test052();
	system("pause");
	return 0;
}