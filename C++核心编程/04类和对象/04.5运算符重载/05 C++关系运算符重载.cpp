#include <iostream>
#include<string>
using namespace std;
//重载关系运算符 
class Person5
{
public:
	Person5(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	//重载 == 号
	bool operator==(const Person5 &p)const
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}
	//重载 ！=号
	bool operator!=(const Person5& p)const
	{
		return !(*this == p);
	}
private:
	string m_Name;
	int m_Age;
};
void test051()
{
	Person5 p1("Tom", 18);
	Person5 p2("Tom", 18);
	if (p1 == p2)
	{
		cout << "p1和p2是相等的！" << endl;
	}
	else
	{
		cout << "p1和p2是不相等的！" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1和p2是不相等的！" << endl;
	}
	else
	{
		cout << "p1和p2是相等的！" << endl;
	}
}
int main5()
{
	test051();
	system("pause");
	return 0;
}