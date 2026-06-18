#include <iostream>
#include <string>
using namespace std;
//多态案例2 制作饮品
class AbstractDrinking4
{
public:
	virtual ~AbstractDrinking4() {}
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;
	//是否进行步骤
	virtual bool isNeedSomething()
	{
		return true;
	}
	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		if (isNeedSomething())
		{
			PutSomething();
		}
	}
};
//制作咖啡
class Coffee4 :public AbstractDrinking4
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup() 
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething() 
	{
		cout << "加入糖和牛奶" << endl;
	}
};
//制作茶叶
class Tea4 :public AbstractDrinking4
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮纯净水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual bool isNeedSomething()
	{
		return false;
	}
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入枸杞" << endl;
	}

};
void doWork4(AbstractDrinking4* abs)  //AbstractDrinking* abs=new Coffee
{
	abs->makeDrink();
	delete abs;//释放
}
void test041()
{
	//制作咖啡
	doWork4(new Coffee4);

	cout << "------------------------" << endl;
	//制作茶叶
	doWork4(new Tea4);
}
int main4()
{
	test041();
	system("pause");
	return 0;
}
