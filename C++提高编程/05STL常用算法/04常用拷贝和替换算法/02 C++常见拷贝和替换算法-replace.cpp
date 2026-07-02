#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//常用拷贝和替换 replace
class Myprint2
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test021()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(20);
	v.push_back(20);
	cout << "替换前:" << endl;
	for_each(v.begin(), v.end(), Myprint2());
	cout << endl;
	//将20替换2000
	replace(v.begin(), v.end(), 20, 2000);
	cout << "替换后:" << endl;
	for_each(v.begin(), v.end(), Myprint2());
	cout << endl;
}
int main2()
{
	test021();
	system("pause");
	return 0;
}