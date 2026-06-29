#include <iostream>
#include<list>
#include<string>
using namespace std;
//list容器赋值和交换
void printList2(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}
//赋值
void test021()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList2(L1);
	list<int>L2;
	L2 = L1;	//operator赋值
	printList2(L2);
	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList2(L3);
	list<int>L4;
	L4.assign(10, 100);
	printList2(L4);
}
//交换
void test022()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	list<int>L2;
	L2.assign(10, 100);
	cout << "交换前： " << endl;
	printList2(L1);
	printList2(L2);
	cout << "交换后： " << endl;
	L1.swap(L2);
	printList2(L1);
	printList2(L2);
}
int main2()
{
	//test01();
	test022();
	system("pause");
	return 0;
}