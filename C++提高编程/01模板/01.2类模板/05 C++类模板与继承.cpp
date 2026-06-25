#include <iostream>
#include<string>
using namespace std;
//类模板与继承
template<class T>
class Base5
{
public:
	T m;
};
//class Son :public Base//错误，必须要知道父类中T类型，才能继承给子类
class Son5 :public Base5 <int>
{
public:

};
void test051()
{
	Son5 s1;
}
//如果想灵活指定父类中T类型，子类也需要变类模板
template<class T1,class T2>
class Son52 :public Base5<T2>
{
public:
	Son52()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj; 
};
void test052()
{
	Son52<int, char>S2;
}
int main5()
{
	//test051();
	test052();
	system("pause");
	return 0;
}