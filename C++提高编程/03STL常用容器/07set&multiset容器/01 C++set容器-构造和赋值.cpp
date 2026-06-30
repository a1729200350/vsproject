#include <iostream>
#include<set>
#include<string>
using namespace std;
//set容器构造和赋值操作
void printSet1(const set<int>&s)
{
	for (set<int>::const_iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test011()
{
	set<int>s1;
	//插入数据 只有insert方式
	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	//遍历容器
	//set容器 特点： 所有元素插入时候 自动被排序
	//set容器不允许插入重复值
	printSet1(s1);
	//拷贝构造
	set<int>s2(s1);
	printSet1(s1);
	//赋值操作
	set<int>s3;
	s3 = s2;
	printSet1(s3);
}
int main1()
{
	test011();
	system("pause");
	return 0;
}