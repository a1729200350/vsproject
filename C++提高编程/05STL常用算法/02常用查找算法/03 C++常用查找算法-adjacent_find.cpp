#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//常用查找算法 adjacent_find
void test031()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);
	vector<int>::iterator pos =adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "未找到相邻重复元素" << endl;
	}
	else
	{
		cout << "找到相邻重复元素" << *pos << endl;
	}
}
int main3()
{
	test031();
	system("pause");
	return 0;
}