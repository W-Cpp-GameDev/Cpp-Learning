#include<iostream>
using namespace std;
int main()
{
	//创建数组
	int arr[7] = { 4,2,5,7,1,8,9 };
	//元素个数
	int num = sizeof(arr) / sizeof(arr[0]);
	//打印初始数组
	cout << "初始数组：" << endl;
	for (int i = 0;i < num;i++)
	{
		cout <<arr[i];
	}
	//外层循环轮数
	for (int i = 0;i < num - 1;i++)
	{
		//内循环对比轮数
		for (int j = 0;j < num - i - 1;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << endl;
	cout << "冒泡排序后:"<<endl;
	for (int i = 0;i < num;i++)
	{
		cout << arr[i];
	}
	return 0;
}