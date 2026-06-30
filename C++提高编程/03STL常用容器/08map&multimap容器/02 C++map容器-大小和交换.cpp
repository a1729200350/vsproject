#include<map>
#include<iostream>
#include<string>
using namespace std;
//map容器  大小和交换
void printMap2(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin();it != m.end();it++)
	{
		cout << "键值：" << it->first << " 实值：" << it->second << endl;
	}
	cout << endl;
}
//大小
void test021()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	if (m.empty())
	{
		cout << "m为空" << endl;
	}
	else
	{
		cout << "m不为空" << endl;
		cout << "m的大小为：" << m.size() << endl;
	}
}
//交换
void test022()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	map<int, int>m2;
	m2.insert(pair<int, int>(5, 100));
	m2.insert(pair<int, int>(6, 200));
	m2.insert(pair<int, int>(7, 300));
	m2.insert(pair<int, int>(8, 400));
	cout << "交换前：" << endl;
	printMap2(m1);
	printMap2(m2);
	m1.swap(m2);
	cout << "交换后：" << endl;
	printMap2(m1);
	printMap2(m2);
}
int main2()
{
	//test021();
	test022();
	system("pause");
	return 0;
}