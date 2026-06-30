#include <iostream>
#include<set>
#include<string>
using namespace std;
//set容器插入和删除
void printSet3(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test031()
{
	set<int>s1;
	//插入
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	//遍历
	printSet3(s1);
	//删除
	s1.erase(s1.begin());
	printSet3(s1);
	//删除重载版本
	s1.erase(30);
	printSet3(s1);
	//清空
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet3(s1);
}
int main3()
{
	test031();
	system("pause");
	return 0;
}