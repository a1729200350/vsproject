#include<iostream>
#include<string>
using namespace std;
int main1()
{
	//数组特点：
	//放在一块连续的内存空间中
	//数组中每个元素都是相同数据类型
	//我们可以通过下标访问数组中的元素
	/*
		1、数据类型 数组名[ 数组长度 ];
		2、数据类型 数组名[	数组长度 ] = { 值1，值2 ...} ;
		3、数据类型 数组名[] = { 值1，值2 ...} ;
	*/

	//1、数据类型 数组名[ 数组长度 ];
	int arr[5];
	//给数组中的元素进行赋值
	//数组元素的下标是从0开始索引的
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//访问数据元素
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;

	//2、数据类型 数组名[数组长度] = { 值1，值2 ... };
	//如果在初始化数据时候，没有全部填写完，会用0来填补剩余数据
	int arr2 [5] = { 10,20,30,40,50 };
	//cout << arr2[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;
	//cout << arr2[3] << endl;
	//cout << arr2[4] << endl;
	
	//利用循环 输出数组中的元素
	//for (int i = 0;i < 5;i++)
	//{
	//	cout << arr2[i] << endl;
	//}

	//3、数据类型 数组名[] = { 值1，值2 ...} ;
	//定义数组的时候，必须有初始的长度
	int arr3[] = { 1,2,3,4,5,6,7,8,9};
	for (int i = 0;i < 9 ; i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}