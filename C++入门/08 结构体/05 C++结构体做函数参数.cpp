#include <iostream>
#include<string>
using namespace std;
//定义学生结构体
struct Student5
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	double score;
};
//打印学生信息函数
//1、值传递
void printStudent51(struct Student5 s)
{
	s.age = 66;
	cout << "子函数中 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}
//2、地址传递
void printStudent52(struct Student5* p)
{
	p->age = 100;
	cout << "子函数2中 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}
int main5()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息
	//创建结构体变量
	struct Student5 s;
	s.name = "张三";
	s.age  = 19;
	s.score = 60.5;
	//printStudent1(s);
	printStudent52(&s);
	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << endl;
	system("pause");
	return 0;
}