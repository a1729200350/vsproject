#include <iostream>
#include<string>
using namespace std;
int main8()
{
	//1、先打印所有的水仙花数     
								//水仙花数：三位数字，每位的三次方之和等于原数本身
	int num = 100;
	do
	{
		//2、从所有三位数字中找到水仙花数
		int a = 0; //个位
		int b = 0; //十位
		int c = 0; //百位
		a = num % 10;		//获取数字个位
		b = num / 10 % 10;  //获取数字十位
		c = num /100;		//获取数字百位
		int sum = a * a * a + b * b * b + c * c * c;
		if(num==sum)//如果是水仙花数才打印
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	
	system("pause");
	return 0;
}