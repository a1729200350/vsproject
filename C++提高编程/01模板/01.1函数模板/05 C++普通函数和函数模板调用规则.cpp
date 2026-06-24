#include<iostream>
#include<string>
using namespace std;
//普通函数与函数模板调用规则
//1、如果函数模板和普通函数都可以调用 ，优先调用普通函数
//2、可以通过空模板参数列表 强制调用 函数模板
//3、函数模板也可以发生重载 
//4、如果函数模板可以产生更好的匹配，优先调用函数模板
void myPrint6(int a, int b)
{
	cout << "调用普通函数" << endl;
}
template<class T>
void myPrint6(T a,T b)
{
	cout << "调用函数模板" << endl;
}
template<class T>
void myPrint6(T a, T b ,T c)
{
	cout << "调用重载函数模板" << endl;
}
void test061()
{
	int a = 10;
	int b = 20;
	//myPrint6(a, b);
	//通过空模板参数列表 强制调用函数模板
	//myPrint6<>(a, b);
	//myPrint6(a, b, 100);
	//如果函数模板产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint6(c1, c2);
}
int main6()
{
	test061();
	system("pause");
	return 0;
}