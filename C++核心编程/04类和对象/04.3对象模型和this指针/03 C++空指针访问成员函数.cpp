#include<iostream>
#include<string>
using namespace std;
//空指针调用成员函数
class Person3
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		//报错原因是因为传入的指针是NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;
	}
	int m_Age;
};
void test031()
{
	Person3 * p = NULL;
	//p->showClassName();
	p->showPersonAge();
}
int main3()
{
	test031();
	system("pause");
	return 0;
}