#include <iostream>
#include <string>
using namespace std;
int main1()
{
	//1、定义一个指针
	int a = 10;
	//定义指针的语法： 数据类型 * 指针变量名；
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "a的地址为：" << p << endl;
	//2、使用指针
	//可以通过解引用的方式来找到指针的内存
	//指针前加 * 代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	cout << "a= " << a << endl;
	cout << "*p= " << *p << endl;     //间接访问内存 ，并可以对内存进行修改
	system("pause");
	return 0;
}