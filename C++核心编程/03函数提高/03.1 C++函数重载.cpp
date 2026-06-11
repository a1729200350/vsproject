#include <iostream>
#include <string>
using namespace std;
//函数重载
//可以让函数名相同，提高复用性
//函数重载满足条件
//1、必须在同一个作用域下
//2、函数名称相同
//3、函数的参数类型不同、或者个数不同、或者顺序不同
void func()
{
	cout << "func的调用" << endl;
}
void func(int a)
{
	cout << "func(int a)的调用" << endl;
}
void func(double a)
{
	cout << "func(double a)的调用" << endl;
}
void func(int a ,double b)
{
	cout << "func(int a ,double b)的调用" << endl;
}
void func(double b , int a)
{
	cout << "func(double b , int a)的调用" << endl;
}

//注意事项
//函数的返回值不可以作为函数重载的条件
//int func(double b, int a)
//{
//	cout << "func(double b , int a)的调用" << endl;
//}
int main3()
{
	//func();
	//func(10);
	//func(3.14);
	func(1, 1.1);
	func(1.1,1);
	system("pause");
	return 0;
}