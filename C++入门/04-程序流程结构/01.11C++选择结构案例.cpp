#include <iostream>
#include <string>
using namespace std;
int main2()
{
	//三只小猪比体重，判断哪知最重
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	//请输入小猪A的体重
	cout << "请输入小猪A的体重" << endl;
	cin >> num1;
	cout << "请输入小猪B的体重" << endl;
	cin >> num2;
	cout << "请输入小猪C的体重" << endl;
	cin >> num3;
	//显示三个小猪的体重
	cout << "小猪A的体重：" << num1  << "\n小猪B的体重：" << num2 << "\n小猪C的体重：" << num3 << endl;
	//比较三个小猪的体重
	//先比较A、B小猪的体重，重者与小猪C比较
	if (num1 > num2)
	{
		cout << "小猪A比小猪B重" << endl;
		if(num1>num3)
		{
			cout << "小猪A最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	else 
	{
		cout << "小猪B比小猪A重" << endl;
		if (num2 > num3)
		{
			cout << "小猪B最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	system("pause");
	return 0;
}