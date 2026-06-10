#include<iostream>
#include<string>
using namespace std;
int main4()
{
	////1、创建五只小猪体重的数组
	//int arr[] = { 100,500,300,200,400 };
	////2、从数组中找到最大值
	//int max = 0;
	//int num = 0;
	//for (int i = 0;i < 5;i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//		num = i+1;
	//	}
	//}
	////3、打印最大值
	//cout << "最重的小猪是第" << num << "个" << "重量为：" << max << endl;
	//**************************************************************************
	////实现数组元素逆置
	////1、创建数组
	//int arr[5] = { 4,8,3,2,1 };
	//int start = 0;
	//int end = sizeof(arr) / sizeof(arr[0]) - 1;
	////逆置前的数组
	//for (int i = 0;i < 5;i++)
	//{
	//	cout << arr[i] << endl;
	//}
	////2、实现逆置
	//for (;start < end;start++, end--)
	//{
	//	int temp = arr[start];
	//	arr[start] = arr[end];
	//	arr[end] = temp;
	//}
	////3、打印逆置后的数组
	////逆置后的数组
	//for (int i = 0;i < 5;i++)
	//{
	//	cout << arr[i] << endl;
	//}
	//****************************************************************
	//实现数组元素逆置
	//1、创建数组
	//逆置前的数组
	int arr[5] = { 4,8,3,2,1 };
	cout << "逆置前的数组排序" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] << endl;
	}
	//2、实现逆置
	//2.1记录起始下标位置
	//2.2 记录结束下标的位置
	//2.3起始下标与结束下标的元素换
	//2.4起始位置++，结束位置--
	//2.5循环执行2.1的操作，直到起始位置>=结束位置
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++, end--;
	}
	//逆置后的数组
	cout << "逆置后的数组排序" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}