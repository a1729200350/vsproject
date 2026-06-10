#include <iostream>
#include<string>
using namespace std;
//结构体数组
//1、定义一个结构体
struct Student2
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	double score;
};

int main2()
{
	//2、创建一个结构体数组
	struct Student2 stuArray[3] =
	{
		{"张三",18,100},
		{"李四",20,94.5},
		{"王五",19,96.5}
	};
	//3、给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	//4、遍历结构体数组
	for (int i = 0;i < 3;i++)
	{
		cout << "姓名：" << stuArray[i].name << "年龄： " << stuArray[i].age << "分数：" << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}