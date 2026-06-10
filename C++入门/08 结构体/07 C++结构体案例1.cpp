#include <iostream>
#include<string>
#include<random>
using namespace std;
//学生结构体定义
struct student 
{
	//姓名
	string sName;

	//分数
	double score;
};
//老师结构体定义
struct teacher
{
	//姓名
	string tName;
	//学生数组
	struct student sArray[5];
};
//给老师和学生赋值的函数
void allocateSpace(struct teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0;i < len;i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		//通过循环给每名老师所带的学生赋值
		for (int j = 0;j < 5;j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<>dis(0, 100);
			int random = dis(gen);
			//int random = rand() % 61 + 40;//40~99
			tArray[i].sArray[j].score = random;
		}

	}
}
void printInfo(struct teacher tArray[] ,int len)
{
	for (int i=0;i<len;i++)
	{
		cout << "老师姓名： " << tArray[i].tName << endl;
		for (int j = 0;j < 5;j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName
				<<" 学生分数："<<tArray[i].sArray[j].score << endl;
		}
	}
};
int main7()
{
	//1、创建三名老师的数组
	struct teacher tArray[3];
	//2、通过函数给三名老师的信息赋值，并且给老师带的学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//3、打印所有老师及所带学生信息
	printInfo(tArray, len);
	system("pause");
	return 0;
}