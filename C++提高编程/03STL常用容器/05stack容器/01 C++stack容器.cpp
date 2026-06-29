#include<iostream>
#include<string>
#include<ctime>
#include<vector>
#include<deque>
#include<algorithm>
#include<stack>
using namespace std;
//栈stack容器
void test011()
{
	//特点：符合先进后出数据结构
	stack<int>s;
	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	//只要栈不为空，查看栈顶，并且执行弹栈操作
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为：" << s.top() << endl;
		//出栈
		s.pop();
	}
	cout << "栈的大小：" << s.size()<<endl;
}
int main1()
{
	test011();
	system("pause");
	return 0;
}