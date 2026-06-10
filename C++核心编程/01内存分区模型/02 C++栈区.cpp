#include <iostream>
#include<string>
using namespace std;
//栈区数据注意事项		----不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放
int * func(int b)//形参数据也会放在栈区                     不能用void int返回应该用int *
{
	b = 100;
	int a = 10;//局部变量	存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量地址
}
int main2()
{
	//接受func函数的返回值
	int* p = func(1);
	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//第二次这个数据就不再保留了
	system("pause");
	return 0;
}