#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
//常用算术生成算法

void test011()
{
	vector<int>v;
	for (int i = 0;i <= 100;i++)
	{
		v.push_back(i);
	}
	int total=accumulate(v.begin(), v.end(), 1000);
	cout << "total: " << total << endl;
}
int main1()
{

	test011();
	system("pause");
	return 0;
}