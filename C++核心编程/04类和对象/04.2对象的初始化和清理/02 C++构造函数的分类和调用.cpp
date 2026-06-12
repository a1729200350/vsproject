#include<iostream>
#include<string>
using namespace std;
//1、构造函数的分类和调用
//分类
//按照参数分类			无参构造(默认构造)和有参构造
//按照类型进行分类		不同构造	拷贝构造
class Person2
{
public:
	//构造函数
	Person2()
	{
		cout << "Person无参构造函数的调用" << endl;
	}
	Person2(int a)
	{
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person2(const Person2 &p)
	{
		//将传入的人的所有属性，拷贝到当前对象身上
		age = p.age;
		cout << "Person拷贝构造函数的调用" << endl;
	}
	~Person2()
	{
		cout << "析构函数的调用" << endl;
	}
	int age;
};
//调用
void test021()
{
	//1、括号法
	//Person2 p1;	//默认构造函数调用
	//Person2 p2(10);//有参构造函数
	//Person2 p3(p2);//拷贝构造函数
	//注意事项1、
	//调用默认构造函数时候，不要加()
	//因为下面这行代码，编译器会认为是一个函数的声明.不会认为在创建对象
	//Person2 p1();
	//void func();
	//cout << "p2的年龄:" << p2.age << endl;
	//cout << "p3的年龄:" << p3.age << endl;
	//2、显示法
	//Person2 p1;
	//Person2 p2 = Person2(10);//有参构造
	//Person2 p3 = Person2(p2);//拷贝构造
	//Person2(10);			   //匿名对象		特点：当前行结束后，系统会立即回收掉匿名对象
	//cout << "aaaa" << endl;
	// 注意事项2、
	// 不要利用拷贝构造函数		初始化匿名对象	编译器会认为Person2(p3) ==Person2 p3; 对象声明
	//Person2 (p3);
	//3、隐式转换法
	Person2 p4 = 10;  //相当于 写了 Person2 p4=Person2(10);   有参构造
	Person2 p5 = p4;
}

int main2()
{
	test021();
	system("pause");
	return 0;
}