#include <iostream>
#include<set>
#include<string>
using namespace std;
//set容器查找和统计
void printSet4(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test041()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//查找
	set<int>::iterator pos=s1.find(200);
	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}
void test042()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//统计30的个数
	int num = s1.count(30);
	//对于set而言 统计结果要么是0，要么是1
	cout << "num =" << num << endl;
}
int main4()
{
	test041();
	test042();
	system("pause");
	return 0;
}