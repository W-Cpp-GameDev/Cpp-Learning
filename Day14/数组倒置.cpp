#include<iostream>
using namespace std;
int main()
{
	//1.创建数组
	//2.起始元素存到暂时内存，末尾元素转到起始元素，起始元素再存到末尾元素
	int arr[5] = { 1,3,2,4,5 };
	//打印初始数组
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start < end)
	{
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
	}
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}