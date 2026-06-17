#include <iostream>
#include <string>
using namespace std;
//继承方式
//公共继承
class Base31
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base31
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员  到子类中依然是公共权限
		m_B = 10;//父类中保护权限成员  到子类中依然是保护权限
		//m_C = 10;//父类中的私有权限成员  子类访问不到
	}
};
void test031()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;  //到Son1中 m_B是保护权限 类外访问不到
}
//保护继承
class Base32
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son32 :protected Base32
{
public:
	void func()
	{
		m_A = 100;		//父类中公共成员，到子类中变为保护权限
		m_B = 100;	   //父类中保护成员，到子类中也变为保护权限
		//m_C = 100;  //父类中的私有成员 子类访问不到
	}
};
void test032()
{
	Son32 s2;
	//s2.m_A = 100;	//在Son2中 m_A变为保护权限 ，因此类外访问不到
	//s2.m_B = 100;  //到Son2中 m_B是保护权限 类外访问不到
}
//私有继承
class Base33
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son33 :private Base33
{
public:
	void func()
	{
		m_A = 100;			//父类中公共成员  到子类中变为私有成员
		m_B = 100;			//父类中保护的成员  到子类中变为  私有成员
		//m_C = 100;		//父类中私有成员，子类访问不到
	}
};
void test033()
{
	Son33 s3;
	//s3.m_A = 1000;//到Son3 中变为私有成员 类外访问不到
	//s3.m_B = 1000;//到Son3 中变为私有成员 类外访问不到
}
class GrandSon33 :public Son33
{
public:
	void func()
	{
		//m_A = 1000;//到了Son3中 m_A变为私有，即使是儿子 也访问不到
		//m_A = 1000;//到了Son3中 m_A变为私有，即使是儿子 也访问不到
	}
};
int main3()
{

	system("pause");
	return 0;
}