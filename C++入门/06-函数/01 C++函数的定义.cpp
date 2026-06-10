#include<iostream>
#include<string>
using namespace std;
int main1()
{
	/*
		实现一个加法函数，功能是传入两个整型数据，计算数据相加结果，并且返回
		1、返回值类型		int
		2、函数名			add
		3、参数列表			(int num1 ，int num2 )
		4、函数体语句		int sum = num1+ num2;
		5、return 表达式	return sum;
	*/

	/*
		语法：
		返回值类型	函数名	参数列表				
		{
			函数体语句

			return 表达式
		}
		int add(int num1 , int num2)
		{
			int sum = num1 + num2;
			return sum;
		}
	*/
	system("pause");
	return 0;
}
//函数的定义
//语法：
//返回值类型	函数名（参数列表）{ 函数体语句 return表达式}
//加法函数，实现两个整型相加，并且将相加的结果进行返回
int add0(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}