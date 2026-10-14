#include<iostream>
using namespace std;
//冒泡排序函数

void bubllesort(int* arr, int len)//参数1 数组首地址 参数2 数组长度
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}
//打印排序后数组
void printbublle(int* arr, int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i];
	}
}



int main()
{
	//1.创建数组
	int arr[10] = { 2,1,4,3,6,5,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//2.创建函数，实现冒泡排序
	bubllesort(arr, len);
	//3.打印排序后的数组
	printbublle(arr, len);
	return 0;
}