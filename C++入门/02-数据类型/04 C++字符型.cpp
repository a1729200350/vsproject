#include <iostream>
using namespace std;
int main4()
{
	//1、字符型变量的创建方式
	char ch = 'a';
	cout << ch << endl;
	//2、字符型变量所占内存大小
	cout << "char字符型变量所占内存空间：" << sizeof(ch) << endl;
	//3、字符型变量常见错误
	//char ch1 = "a"; //错误：创建字符型变量时要用单引号
	//char ch2 = 'abcdef';//创建字符变量时只能存储一个字符。
	//4、字符型变量对应ASCII编码
	// a - 97
	// A - 65
	cout << (int)ch << endl;//强制把字符型转化成整型，输出出来。
	system("pause");
	return 0;
}