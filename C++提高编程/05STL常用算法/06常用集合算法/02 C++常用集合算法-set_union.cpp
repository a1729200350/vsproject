#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//常用集合算法 set_union
void myPrint2(int val)
{
	cout << val << " ";
}
void test021()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>vTarget;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	//目标容器提前开辟空间
	//最特殊情况 两个容器没有交集 并集就是两个容器相加
	vTarget.resize(v1.size() + v2.size());
	vector<int>::iterator itEnd=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint2);
	cout << endl;
}
int main2()
{

	test021();
	system("pause");
	return 0;
}