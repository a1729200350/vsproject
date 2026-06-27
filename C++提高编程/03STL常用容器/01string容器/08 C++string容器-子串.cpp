#include<iostream>
#include<string>
using namespace std;
//string求子串
void test081()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}
void test082()
{
	string email = "zhangsan@sina.com";
	//从邮件地址中 获取 用户名信息
	int pos = email.find("@");//8
	//cout << pos << endl;
	string usrName = email.substr(0, pos);
	cout << usrName << endl;
}
int main8()
{
	test081();
	test082();
	system("pause");
	return 0;
}