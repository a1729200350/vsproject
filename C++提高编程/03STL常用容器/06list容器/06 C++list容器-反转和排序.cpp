#include <iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
//list容器反转和排序
void printList6(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test061()
{
	//反转
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(30);
	cout << "反转前: " << endl;
	printList6(L1);
	//反转
	L1.reverse();
	cout << "反转后: " << endl;
	printList6(L1);
}
bool myCompare6(int v1,int v2)
{
	//降序  让第一个数>第二个数
	return v1 > v2;
}
//排序
void test062()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(30);
	cout << "排序前: " << endl;
	printList6(L1);
	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//不支持随机访问迭代器的容器，内部会提供对应一些算法
	//sort(L1.begin(), L1.end());
	L1.sort();//默认排序规则 从小到大 升序
	cout << "排序后: " << endl;
	printList6(L1);
	L1.sort(myCompare6);
	printList6(L1);
}
int main6()
{
	//test061();
	test062();
	system("pause");
	return 0;
}
