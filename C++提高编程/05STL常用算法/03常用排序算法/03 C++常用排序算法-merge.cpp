#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
#include<random>
using namespace std;
//常用排序算法 merge
void myPrint3(int val)
{
	cout << val << " ";
}
void test031()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	//目标容器
	vector<int>vTarget;
	//提前给目标容器分配空间
	vTarget.resize(v1.size()+v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint3);
	cout << endl;
}
int main3()
{
	test031();
	system("pause");
	return 0;
}