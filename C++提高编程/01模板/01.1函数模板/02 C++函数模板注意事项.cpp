#include<iostream>
#include<string>
using namespace std;
//函数模板注意事项
template<class T>						//typename可以替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1、自动类型推到，必须推导出一致的数据类型T才可以使用
void test021()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	// mySwap(a, b); //正确
	//mySwap(a, c);	//错误！推导不出一致的T类型
	cout << "a = " << endl;
	cout << "b = " << endl;
}
//2、模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func调用" << endl;
}
void test022()
{
	func<void>();
}
int main2()
{
	test021();
	test022();
	system("pause");
	return 0;
}