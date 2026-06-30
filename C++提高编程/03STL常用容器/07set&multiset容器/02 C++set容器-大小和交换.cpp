#include <iostream>
#include<set>
#include<string>
using namespace std;
//set 容器大小和交换
void printSet2(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//大小
void test021()
{
	set<int>s1;
	//插入数据
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);
	//打印容器
	printSet2(s1);
	//判断是否为空
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size()<<endl;
	}
}
//交换
void test022()
{
	set<int>s1;
	//插入数据
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);
	set<int>s2;
	//插入数据
	s2.insert(100);
	s2.insert(400);
	s2.insert(200);
	s2.insert(300);
	s2.insert(500);
	cout << "交换前： " << endl;
	printSet2(s1);
	printSet2(s2);
	cout << "交换后： " << endl;
	s1.swap(s2);
	printSet2(s1);
	printSet2(s2);
}
int main2()
{
	//test021();
	test022();
	system("pause");
	return 0;
}