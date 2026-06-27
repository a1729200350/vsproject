#include <iostream>
#include<string>
using namespace std;
//字符串  插入和删除
void test071()
{
	string str = "hello";
	//插入
	str.insert(1, "111");
	//h111ello
	cout << "str = " << str << endl;
	//删除
	str.erase(1, 3);
	cout << "str = " << str << endl;
}
int main7()
{
	test071();
	system("pause");
	return 0;
}