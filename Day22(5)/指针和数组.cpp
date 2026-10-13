#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = arr;//指向数组的指针
	cout << "利用指针取出元组第一个元素:" << *p << endl;
	//利用指针访问全部元素
	cout << "利用指针遍历所有元素：" << endl;
	for (int i = 0;i < 10;i++)
	{
		cout << *p<<" ";
		p++;//让指针向后偏移4个字节
	}

	return 0;
}