#pragma once
#include<iostream>
#include"Identity.h"
using namespace std;
//教师类
class Teacher :public  Identity
{
public:
	//默认构造函数
	Teacher();
	//有参构造
	Teacher(int empId, string name, string pdw);
	//菜单界面
	virtual void operMenu();
	//查看所有预约
	void showAllOrder();
	//审核预约
	void validOrder();
	//职工编号
	int m_EmpId;
};
