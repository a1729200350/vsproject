#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
#include<random>
using namespace std;
//常用排序算法 random_shuffle
void myPrint2(int val)
{
	cout << val <<" ";
}
void test021()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	//利用 洗牌算法 打乱顺序
	// 获取硬件随机数作为种子
	random_device rd;
	// 初始化梅森旋转算法引擎
	mt19937 g(rd());
	shuffle(v.begin(), v.end(),g);					//random_shuffle已被废除
	for_each(v.begin(), v.end(), myPrint2);
	cout << endl;
}
int main2()
{
	test021();
	system("pause");
	return 0;
}