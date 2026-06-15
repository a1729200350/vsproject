#include <iostream>
#include<string>
using namespace std;
//建筑物类
class Building1
{
	friend void goodGay(Building1* building);
	//goodGay全局函数 是Building好朋友，可以访问building中私有成员
public:
	Building1()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室

};
//全局函数
void goodGay(Building1 *building)
{
	cout << "好基友全局函数正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友全局函数正在访问：" << building->m_BedRoom << endl;

}
void test011()
{
	Building1 building1;
	goodGay(&building1);
}
int main1()
{
	test011();
	system("pause");
	return 0;
}