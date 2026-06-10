#include <iostream>
#include<string>
using namespace std;
//结构体指针
//定义学生结构体
struct Student3
{
	string name; //姓名
	int age;//年龄
	double score;//分数
};
int main3()
{
	//1、创建学生结构体变量
	struct Student3 s = { "张三",18,99.5 };	//struct 可省略
	//2、通过指针指向结构体变量
	struct Student3* p = &s;			//struct 可省略
	//3、通过指针访问结构体变量中的数据
	//通过结构体指针 访问结构体中的属性，需要利用 ->
	cout << "姓名：" << p->name << " 年龄：" << p->age <<" 考试分数："<<p->score << endl;
	system("pause");
	return 0;
}