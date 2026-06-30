#include<map>
#include<iostream>
#include<string>
using namespace std;
//map容器构造和赋值
void printMap1(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin();it != m.end();it++)
	{
		cout << "key值:"<<it->first <<" 实值：" <<it->second<<  endl;
	}
	cout << endl;
}
void test011()
{
	//创建map容器
	map<int, int> m;
	m.insert(pair<int, int>(1,10));
	m.insert(pair<int, int>(3, 20));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(4, 40));
	printMap1(m);
	//拷贝构造
	map<int, int>m2(m);
	printMap1(m2);
	//赋值
	map<int, int>m3;
	m3 = m2;
	printMap1(m3);
}
int main1()
{
	test011();
	system("pause");
	return 0;
}