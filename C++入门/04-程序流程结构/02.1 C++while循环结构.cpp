#include <iostream>
#include<string>
using namespace std;
int main5()
{
	//while 循环
	//在屏幕中打印0~9这10个数字
	int a = 0;
	//while ()中填入循环条件
	//注意事项：在写循环一定要避免死循环出现
	while (a < 10)
	{
		cout << a << endl;
		a++;
	}
	system("pause");
	return 0;
}