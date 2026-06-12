#include<iostream>
#include <string>
using namespace std;
//#include"point.h"
#include"circle.h"
//判断点和圆的关系
//点到圆心的距离 == 半径 点在圆上
//点到圆心的距离 >  半径 点在圆外
//点到圆心的距离 <  半径 点在圆内
//点到圆心的距离？?
//// 点类
//class Point
//{
//public:
//	//设置X坐标
//	void setX(double X)
//	{
//		m_X = X;
//	}
//	//获取X坐标
//	double getX()
//	{
//		return m_X;
//	}
//	//设置Y坐标
//	void setY(double Y)
//	{
//		m_Y = Y;
//	}
//	//获取Y坐标
//	double getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
////圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(double R)
//	{
//		m_R = R;
//	}
//	//获取半径
//	double getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	double m_R;//半径
//	//在类中可以让另一个类 作为本类中的成员
//	Point m_Center;
//};
//判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
	//计算两点之间距离的平方
	double distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	double rDistance = c.getR() * c.getR();
	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	//创建圆
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);
	//创建点
	Point p1;
	p1.setX(10);
	p1.setY(10);
	//判断关系
	isInCircle(c1, p1);
	system("pause");
	return 0;
}