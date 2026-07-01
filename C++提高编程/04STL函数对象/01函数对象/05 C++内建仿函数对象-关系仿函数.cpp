#include<iostream>
#include<string>
#include<vector>
#include<functional>//内建函数对象头文件
#include<algorithm>
using namespace std;
//内建函数对象  关系仿函数
//大于 greater
class MyCompare5
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};
void test051()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//降序
	//sort(v.begin(), v.end(), MyCompare5());
	//greater<int>()  内建函数对象
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main5()
{
	
	test051();
	system("pause");
	return 0;
}