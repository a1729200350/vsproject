#include <iostream>
#include <string>
using namespace std;
//继承中的构造和析构顺序
class Base4
{
public:
	Base4()
	{
		cout << "Base的构造函数！" << endl;
	}
	~Base4()
	{
		cout << "Base的析构函数！" << endl;
	}
};
class Son4:public Base4
{
public:
	Son4()
	{
		cout << "Son的构造函数！" << endl;
	}
	~Son4()
	{
		cout << "Son的析构函数！" << endl;
	}
};
void test041()
{
	//Base4 b;
	//继承中的构造和析构顺序如下：
	//先构造父类，再构造子类，析构顺序与构造顺序相反
	Son4 s; 
}
int main4()
{
	test041();
	system("pause");
	return 0;
}