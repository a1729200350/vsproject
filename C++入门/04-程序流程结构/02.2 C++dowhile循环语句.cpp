#include <iostream>
#include<string>
using namespace std;
int main7()
{
	//do ..while 语句
	//在屏幕输出0~9这10个数字
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} 
	while (num<10);
	//do..while和while循环的区别： do..while会先执行一次循环语句
	system("pause");
	return 0;
}