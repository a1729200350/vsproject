#include <iostream>
#include <string>
using namespace std;
//函数的默认参数
//如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
//语法： 返回值类型 函数名(形参 =默认值){}
int func(int a,  int b=20, int c=30)
{

	return a + b + c;
}

//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须要有默认值
//int func2(int a, int b, int c, int d = 10)
//{
//
//	return a + b + c + d;
//}
//2、如果函数的声明有了默认参数，函数的实现就不能有默认参数
//声明和实现只能由一个默认参数
int func2(int a, int b);
int func2(int a=20, int b=20)
{
	return a + b;
}
int main1()
{
	//cout<<func(10,90)<<endl;
	cout << func2() << endl;
	system("pause");
	return 0;
}