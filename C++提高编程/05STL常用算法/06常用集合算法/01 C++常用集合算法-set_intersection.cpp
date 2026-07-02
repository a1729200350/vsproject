#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//常用集合算法 set_intersection
void myPrint1(int val)
{
	cout << val << " ";
}
void test011()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>vTarget;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);//0~9
		v2.push_back(i + 5);//5~14
	}
	//目标容器需要提前开辟空间
	//最特殊情况 大容器包含小容器  开辟空间 取小容器的size即可
	vTarget.resize(min(v1.size(), v2.size()));
	//获取交集
	vector<int>::iterator itEnd=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint1);
	cout << endl;
}
int main1()
{
	test011();
	system("pause");
	return 0;
}