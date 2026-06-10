#include<iostream>
#include<string>
using namespace std;
int main5()
{
	//利用冒泡排序实现升序序列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "排序前：" << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";
		
	}
	cout << endl;
	//开始冒泡排序
	//总共排序比较轮数为 元素个数-1
	for (int i = 0;i < size - 1;i++)
	{
		//内层循环对比
		//次数 = 元素个数 - 当前轮数 - 1
		for (int j = 0;j < size - 1 - i;j++)
		{
			//如果第一个数字比第二个数字大，实现交换这两个数字位置
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	system("pause");
	return 0;
}