#include <iostream>
#include<list>
#include<string>
using namespace std;
//list容器构造函数
void printList1(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}
void test011()
{
	//创建list容器
	list<int>L1;	//默认构造
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//遍历容器
	printList1(L1);
	//区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printList1(L2);
	//拷贝构造
	list<int>L3(L2);
	printList1(L3);
	//n个elem
	list<int>L4(10, 100);
	printList1(L4);
}
int main1()
{
	test011();
	system("pause");
	return 0;
}