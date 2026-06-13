#include<iostream>
#include<string>
using namespace std;
//深度拷贝和浅拷贝
class Person5
{
public:
	Person5()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person5(int age , int height)
	{
		m_Age = age;
		m_Height=new int(height);
		cout << "Person的有参构造函数调用" << endl;

	}
	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person5(const Person5 &p)
	{
		m_Age = p.m_Age;
		cout << "Person的拷贝构造函数调用" << endl;
		//编译器默认实现的代码
		//m_Height = p.m_Height;
		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}
	~Person5()
	{
		//析构代码，将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
	int * m_Height;//身高
};
void test051()
{
	Person5 p1(18,160);
	Person5 p2(p1);
	cout << "p1的年龄：" << p1.m_Age << "身高为："<< *p1.m_Height << endl;
	cout << "p2的年龄：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
}
int main5()
{
	test051();
	system("pause");
	return 0;
}