#include<iostream>
#include <string>
using namespace std;

//class Students
//{
//public:
//	string s_name;
//	string s_ID;
//	void setname(const string& newname)
//	{
//		s_name = newname;
//	}
//	void setID(const string& newID)
//	{
//		s_ID = newID;
//	}
//	void printStudent()
//	{
//		cout << "姓名：" << s_name << " 学号:" << s_ID << endl;
//	}
//};

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号
//设计一个学生类
class Student
{
public:	//公共权限
		//类中的属性和 行为 统一称为成员
		// 属性 也称为 成员属性 成员变量
		// 行为  成员函数 成员方法
		//属性
	string m_Name;			//姓名
	string m_ID;			//学号
							//行为
							//显示姓名和学号
	void showStudent()
	{
		cout << "姓名：" << m_Name << " 学号：" << m_ID << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		m_Name = name;
	}
	//给学号赋值
	void setID(string ID)
	{
		m_ID = ID;
	}
};
int main2()
{
	//Students s1;
	//cout << "请输入学生姓名" << endl;
	//cin >> s1.s_name;
	//cout << "请输入学生学号" << endl;
	//cin >> s1.s_ID;
	//s1.printStudent();

	//创建一个具体学生 实例化对象
	Student s1;
	//给s1对象 进行属性赋值操作
	//s1.m_Name = "张三";
	s1.setName("张三");
	s1.setID("1");
	//显示学生信息
	s1.showStudent();

	Student s2;
	s2.m_Name = "李四";
	s2.m_ID = "2";
	s2.showStudent();
	system("pause");
	return 0;
}