#include <iostream>
#include <string>
using namespace std;
int main4()
{
	//1、const修饰指针   常量指针
	int a = 10;
	int b = 20;
	const int * p = &a;
	//指针指向的值不可以改，指针指向可以改
	//*p = 20;
	p = &b;

	//2、const修饰常量   指针常量
	//指针指向不可以改，指针指向的值可以改
	int* const p2 = &a;
	*p2 = 100;//正确的
	//p2 = &b;  //错误，指针的指向不可以改

	//3、const修饰指针和常量
	const int* const p3 = &a;
	//*p2 = 100;//错误，指针指向的值不可以改
	//p2 = &b;  //错误，指针的指向不可以改
	system("pause");
	return 0;
}
//常在前 定指向 常在后 定变量