#include <iostream>
#include<string>
using namespace std;
int main2()
{
	//赋值运算符

	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;
	// +=
	a = 10;
	a += 2;   //本质上是 a = a + 2;
	cout << "a = " << a << endl;
	// -=
	a = 10;
	a -= 2;   //本质上是 a = a - 2;
	cout << "a = " << a << endl;
	// *=
	a = 10;
	a *= 2;   //本质上是 a = a * 2;
	cout << "a = " << a << endl;
	// /=
	a = 10;
	a /= 2;   //本质上是 a = a / 2;
	cout << "a = " << a << endl;
	// %=
	a = 10;
	a %= 2;   //本质上是 a = a % 2;
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}