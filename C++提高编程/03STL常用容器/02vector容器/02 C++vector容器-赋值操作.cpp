#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printVector2(vector<int>& v1)
{
	for (vector<int>::iterator it = v1.begin();it != v1.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//vector 赋值
void test021()
{
	vector<int>v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	printVector2(v1);
	//赋值  operator=
	vector<int>v2;
	v2 = v1;
	printVector2(v2);
	//assign 
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector2(v3);
	//assign  n个elem 方式赋值
	vector<int>v4;
	v4.assign(10, 100);
	printVector2(v4);
}
int main2()
{
	test021();
	system("pause");
	return 0;
}