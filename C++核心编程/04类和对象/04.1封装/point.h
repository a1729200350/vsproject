#pragma once
#include <iostream>
using namespace std;
// 点类
class Point
{
public:
	//设置X坐标
	void setX(double X);

	//获取X坐标
	double getX();

	//设置Y坐标
	void setY(double Y);
	//获取Y坐标
	double getY();
private:
	int m_X;
	int m_Y;
};