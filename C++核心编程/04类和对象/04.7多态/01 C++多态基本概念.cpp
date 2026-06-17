#include <iostream>
#include <string>
using namespace std;
//多态
//动物类
class Animal1
{
public:
	//虚函数
	 virtual void speak()
	{
		cout << "动物在叫" << endl;
	}
};
//狗类
class Dog1 :public Animal1
{
public:
	void speak()
	{
		cout << "小狗在叫" << endl;
	}
};
//猫
class Cat1 :public Animal1
{
public:
	//重写   函数返回值类型 函数名 参数列表 完全相同
	/*virtual*/ void speak()
	{
		cout << "小猫在叫" << endl;
	}
};
//执行说话的函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫叫 ，这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

//动态多态满足条件
//1、有继承关系
//2、子类要重写父类的虚函数

//动态多态使用
//父类的指针或者引用  指向子类对象
void doSpeak(Animal1 &animal)//Animal &animal =cat;的引用
{
	animal.speak();
}
void test011()
{
	Cat1 cat;
	doSpeak(cat);
	Dog1 dog;
	doSpeak(dog);
}
void test012()
{
	cout << "sizeof Animal = " << sizeof(Animal1) << endl;
}
int main1()
{
	//test011();
	test012();
	system("pause");
	return 0;
}
