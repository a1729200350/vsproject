#include<iostream>
#include <string>
using namespace std;
//立方体类设计案例
//1、创建立方体类
//2、设计属性
//3、设计行为 获取立方体体积和面积
//4、分别利用全局函数和成员函数判断两个立方体是否相等
class Cube
{
//属性
private:

	double m_L;	//长
	double m_W;	//宽
	double m_H;	//高
	//行为
public:
	//设置长
	void setL(double l)
	{
		m_L = l;
	}
	//获取长
	double getL()
	{
		return m_L;
	}
	//设置宽
	void setW(double w)
	{
		m_W = w;
	}
	//获取宽
	double getW()
	{
		return m_W;
	}
	//设置高
	void setH(double h)
	{
		m_H = h;
	}
	//获取高
	double getH()
	{
		return m_H;
	}
	//获取立方体面积
	double calculateS()
	{
		return (m_L * m_W + m_L * m_H + m_W * m_H) * 2;
	}
	//获取立方体体积
	double calculateV()
	{
		return m_L * m_W * m_H;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_L== c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}
};
//利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)			//用& 引用方式传递 避免拷贝 使用原始数据
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;

}
int main6()
{
	//创建立方体对象
	Cube c1;
	c1.setL(5.25);
	c1.setW(4.125);
	c1.setH(2.25);
	cout << "立方体的面积：" << c1.calculateS() << endl;
	cout << "立方体的体积：" << c1.calculateV() << endl; 
	//创建第二个立方体
	Cube c2;
	c2.setL(8);
	c2.setW(2);
	c2.setH(1.25);
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "成员函数判断出：c1、c2两个立方体相等" << endl;
	}
	else
	{
		cout << "成员函数判断出：c1、c2两个立方体不相等" << endl;
	}
	//利用成员函数判断
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "c1、c2两个立方体相等" << endl;
	}
	else
	{
		cout << "c1、c2两个立方体不相等" << endl;
	}
	system("pause");
	return 0;
}