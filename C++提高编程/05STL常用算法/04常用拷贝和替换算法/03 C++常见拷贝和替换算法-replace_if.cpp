#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//常见拷贝和替换算法 replace_if
class myPrint3
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};
void test031()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(60);
	v.push_back(30);
	v.push_back(40);
	v.push_back(70);
	v.push_back(50);
	v.push_back(80);
	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint3());
	cout << endl;
	//将大于等于30 替换为3000
	cout << "替换后：" << endl;
	replace_if(v.begin(), v.end(), Greater30(), 3000);
	for_each(v.begin(), v.end(), myPrint3());
	cout << endl;
}
int main3()
{
	test031();
	system("pause");
	return 0;
}