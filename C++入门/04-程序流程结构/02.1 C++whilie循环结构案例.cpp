#include <iostream>
#include<string>
#include<random>
#include<ctime>    //time 系统时间头文件
using namespace std;
int main6()
{
	//1、系统生成随机数
	
	// 1. 提供高质量随机种子	利用当前系统时间生成随机数，防止每次随机数都一样
	//srand((unsigned int)time(NULL));
	//int num = (rand() % 100) + 1;	//rand()%100 生成一个0~99的随机数,之后对这个数字+1，则生成的范围为1~100

	std::random_device rd;		
	std::mt19937 gen(rd());		// 2. 用种子初始化高性能的伪随机数生成器 (引擎)
	std::uniform_int_distribution<>dis(1, 100);	// 3. 定义你需要的随机数分布
	int num = dis(gen);		
	//cout << num << endl;    打印系统生成的随机数
	//2、玩家进行猜测
	int val = 0; //玩家输入的猜测值
	cout << "请输入猜测值" << endl;
	cin >> val;
	//3判断玩家的猜测
	// 猜对 退出游戏
	// 猜错 提示猜的结果 过大或过小 重新返回第2步
	while (1)
	{
		if (val > num)
		{
			cout << val << "大了,请重新输入" << endl;
			cin >> val;
		}
		else if (val < num)
		{
			cout << val << "小了,请重新输入" << endl;
			cin >> val;
		}
		else
		{
			cout << "恭喜您猜对了" << endl;
			break;//break在循环中，可以利用该关键字退出当前循环
		}

	}
	system("pause");
	return 0;
}