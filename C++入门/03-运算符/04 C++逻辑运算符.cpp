#include <iostream>
#include <string>
using namespace std;
int main()
{
	//逻辑运算符   非 !
	int a = 10;
	//在C++中除了0都为真
	cout << "!a=" << !a << endl;  
	cout << "!!a=" << !!a << endl;

	//逻辑运算符   与 &&
	int b = 10;
	int c = 0;
	cout << "a&&b=" <<(a && b) << endl;
	cout << "a&&c=" << (a && c) << endl;
	//全真为真，其余为假

	//逻辑运算符  或 ||
	cout << "a||b=" << (a || b) << endl;
	cout << "a||c=" << (a || c) << endl;
	cout << "!a||c=" << (!a || c) << endl;
	//全假为假，其余为真
	system("pause");
	return 0;
}