#include<iostream>
#include<string>
using namespace std;
//ÀàÄ£°å
template<class Nametype ,class Agetype>
class Person1
{
public:
	Person1(Nametype name,Agetype age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson1()
	{
		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
	}
	Nametype m_Name;
	Agetype m_Age;
};
void test011()
{
	Person1<string, int> p1("ËïÎò¿Õ", 999);
	p1.showPerson1();
}
int main1()
{
	test011();
	system("pause");
	return 0;
}