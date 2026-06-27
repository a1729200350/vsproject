#include <iostream>
#include<string>
#include<vector>
using namespace std;
void printVector1(vector<int>&v1)
{
	for (vector<int>::iterator it = v1.begin();it != v1.end();it++)
	{
		cout << *it << " " ;
	}
	cout << endl;
}
//vector 容器构造
void test011()
{
	vector<int>v1;//默认构造 无参构造
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector1(v1);
	//通过区间方式进行构造
	vector<int>v2(v1.begin()+1, v1.end()-1);
	printVector1(v2);
	//n个elem方式构造
	vector<int>v3(10, 100);//10个100
	printVector1(v3);
	//拷贝构造
	vector<int>v4(v3);
	printVector1(v4);
}
int main1()
{
	test011();
	system("pause");
	return 0;
}