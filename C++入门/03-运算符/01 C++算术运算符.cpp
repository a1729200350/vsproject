#include <iostream>
#include <string>
using namespace std; 
int main1() 
{
	// 加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << "a1 + b1 = " << a1 + b1 << endl;
	cout << "a1 - b1 = " << a1 - b1 << endl;
	cout << "a1 * b1 = " << a1 * b1 << endl;
	cout << "a1 / b1 = " << a1 / b1 << endl; //两个整数相除，结果也是整数，将小数部分去除
	
	int a2 = 10;
	int b2 = 20;
	cout << "a2/b2=" << a2 / b2 << endl; 

	int a3 = 10;
	int b3 = 0;
	//cout << "a3/b3" << a3 / b3 << endl; //两数相除，除数不能为零
	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.23;
	cout << "d1/d2=" << d1 / d2 << endl;//运算的结果也可以是小数

	//取模运算本质 就是求余数
	int a4 = 10;
	int b4 = 3;
	cout << "a4%b4=" << a4 % b4 << endl; 

	int a5 = 10;
	int b5 = 20;
	cout << "a5%b5=" << a5 % b5 << endl;
	//两小数之间不可以进行取模运算
	double a6 = 3.14;
	double d6 = 1.1;
	//cout << "a6%b6=" << a6 % b6 << endl;
	//1、前置递增
	int a7 = 10;
	++a7;//让变量加一
	cout << "a7=" << a7 << endl;

	//2、后置递增
	int b7 = 10;
	b7++;//让变量加一
	cout << "b7=" << b7 << endl;

	//3、前置和后置的区别
	//前置递增：先让变量加一，再进行表达式的运算
	int a8 = 10;
	int b8 = ++a8 * 10;
	cout << "a8=" << a8 << endl;
	cout << "b8=" << b8 << endl;
	//后置递增：先进行表达式的运算，再让变量加一
	int a9 = 10;
	int b9 = a9++ * 10;
	cout << "a9=" << a9 << endl;
	cout << "b9=" << b9 << endl;

	system("pause");
	return 0;
}