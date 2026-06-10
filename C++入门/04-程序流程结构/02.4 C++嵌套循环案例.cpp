#include <iostream>
#include<string>
using namespace std;
int main12()
{
	//乘法口诀表
	//打印行数
	for (int i = 1;i <= 9;i++)
	{
		//cout << i << endl;
		for (int j = 1;j <= i;j++)
		{
			cout << j << "*" << i <<"=" << j * i<<" \t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}