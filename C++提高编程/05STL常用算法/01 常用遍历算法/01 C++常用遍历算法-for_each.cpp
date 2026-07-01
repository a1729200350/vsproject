#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//常用遍历算法 for_each
//普通函数
void print011(int val)
{
	cout << val << " ";
}
//仿函数
class print012
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test011()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print011);
	cout << endl;
	for_each(v.begin(), v.end(), print012());
	cout << endl;
}
int main1()
{
	test011();
	system("pause");
	return 0;
}