#include<map>
#include<iostream>
#include<string>
using namespace std;
//map容器查找和统计
void test041()
{
	//查找
	map<int, int>m1;
	m1.insert(make_pair(1, 10));
	m1.insert(make_pair(2, 20));
	m1.insert(make_pair(3, 30));
	map<int, int>::iterator pos = m1.find(3);
	if (pos != m1.end())
	{
		cout << "查到了数据key = " << (*pos).first << "value=" << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
	//统计
	//map不允许插入重复key元素, count统计而言 结果只能是0或1
	//multimap的count统计可能大于1
	int num=m1.count(3);
	cout << "num = " << num << endl;
}
int main4()
{
	test041();
	system("pause");
	return 0;
}