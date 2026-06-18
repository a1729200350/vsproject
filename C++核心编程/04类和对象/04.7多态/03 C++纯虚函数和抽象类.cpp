#include <iostream>
#include <string>
using namespace std;
//纯虚函数和抽象类
class Base3
{
public:
	//纯虚函数
	//只要有一个纯虚函数 这个类称为抽象类
	//抽象类特点：
	//1、无法实例化对象
	//2、抽象类子类必须要重写父类中的纯虚函数 否则也属于抽象类
	virtual void func() = 0;
};
class Son3:public Base3
{
public:
	void func() 
	{
		cout << "func函数调用" << endl;
	};
};
void test031()
{
	//Base b;//抽象类无法实例化对象
	//new Base;//抽象类无法实例化对象
	//Son s;  //子类必须重写父类中的虚函数，否则无法实例化对象
	Base3* base = new Son3;
	base->func();
}
int main3()
{
	test031();
	system("pause");
	return 0;
}
