#include<map>
#include<iostream>
#include<string>
using namespace std;
class MyCompare5
{
public:
	bool operator()(int v1, int v2) const
	{
		//降序
		return	v1 > v2;
	}
};
//map容器 排序
void test051()
{
	map<int, int,MyCompare5>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));
	for (map<int, int,MyCompare5>::iterator it = m.begin();it != m.end();it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}
int main5()
{
	test051();
	system("pause");
	return 0;
}