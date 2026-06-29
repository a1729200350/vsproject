#include<iostream>
#include<string>
#include<vector>
using namespace std;
//vector 容器 预留空间
void test01()
{
	vector<int>v;
	//利用reserve预留空间
	v.reserve(1000000);
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0;i < 1000000;i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num =" << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}