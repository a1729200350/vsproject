#include <iostream>
#include<string>
using namespace std;
class MyInteger31
{
	friend ostream& operator<<(ostream& cout, const MyInteger31& myint);

public:
	MyInteger31()
	{
		m_Num = 0;
	}
	MyInteger31& operator--()
	{
		m_Num--;
		return *this;
	}
	MyInteger31 operator--(int)
	{
		MyInteger31 temp = *this;
		m_Num--;
		return temp;
	}
private:
	int m_Num;
};
ostream& operator<<(ostream & cout, const MyInteger31& myint)
{
	cout << myint.m_Num;
	return cout;
}
void test0311()
{
	MyInteger31 myint;
	cout << myint-- << endl;
	cout << myint << endl;
}

void test0312()
{
	MyInteger31 myint;
	cout << --(--myint) << endl;
	cout << myint << endl;
}
int main31()
{

	test0311();
	test0312();
	system("pause");
	return 0;
}