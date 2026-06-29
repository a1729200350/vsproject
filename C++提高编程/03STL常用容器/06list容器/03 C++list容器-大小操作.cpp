#include <iostream>
#include<list>
#include<string>
using namespace std;
//list容器大小操作
void printList3(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test031()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList3(L1);
	//判断容器是否为空
	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的元素个数： " << L1.size() << endl;
	}
	//重新指定大小
	L1.resize(10);
	printList3(L1);
	L1.resize(2);
	printList3(L1);
}
int main3()
{
	test031();
	system("pause");
	return 0;
}