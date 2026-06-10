#include <iostream>
#include<string>
using namespace std;
//定义学生结构体
struct Student4
{
	string name;	//姓名	
	int age;		//年龄	
	double score;	//分数
};
//定义老师结构体
struct Teacher4 
{
	int id;			//教师编号
	string name;	//教师姓名
	int age;		//教师年龄
	struct Student4 stu;//辅导的学生
};

int main4()
{
	//结构体嵌套结构
	//创建老师
	Teacher4 t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << "老师的姓名：" << t.name << " 老师的职工编号：" << t.id << " 老师的年龄：" << t.age
		<<endl<< "老师的学生姓名：" << t.stu.name << " 学生年龄：" << t.stu.age
		<< " 学生分数：" << t.stu.score << endl;
	system("pause");
	return 0;
}