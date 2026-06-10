#include<iostream>
#include<string>
using namespace std;
int main7()
{
	//1、创建bool数据类型
	bool flag = true; //true 代表真
	cout << flag << endl;
	flag = false; //false 代表假
	cout << flag << endl;
	
	//本质上 1代表真 0代表假
	//2、查看bool数据类型所占内存空间
	cout<<"bool数据类型所占内存空间：" << sizeof(flag) << endl;
	system("pause");
	return 0;
}