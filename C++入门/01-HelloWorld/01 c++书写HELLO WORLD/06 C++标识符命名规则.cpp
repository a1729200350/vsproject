#include<iostream>
using namespace std;
//标识符命名规则
//1、标识符不可以是关键字
//2、标识符是由字母、数字、下划线构成
//3、标识符不能以数字开头
//4、标识符区分大小写
int main()
{
	//1、标识符不可以是关键字
	//int int =10;
	//2、标识符是由字母、数字、下划线构成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	//3、标识符不能以数字开头
	//int 123abc = 40;
	//4、标识符区分大小写
	int aaa = 100;
	int AAA = 200;
	cout << AAA << endl; //aaa和AAA是两个不同的标识符
	//给变量命名时，应该具有一定的意义，见名知意
	system("pause");
	return 0;
}
