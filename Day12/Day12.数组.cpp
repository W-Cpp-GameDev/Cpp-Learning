#include<iostream>
using namespace std;
int main()
{
	//语法:数组类型 变量名[元素个数]={元素}
	int arr[5] = { 1,2,3,4,5 };
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//利用for循环
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] << endl;
	}
	//数组所占内存
	cout << sizeof(arr) << endl;//整型所占字节为4，五个元素所以共占20
	//单个元素
	cout << sizeof(arr[0]) << endl;
	//数组元素个数
	cout << sizeof(arr) / sizeof(arr[0]) << endl;//总内存除以单个元素内存
	//数组地址
	cout << arr << endl;
	//强转成整型
	cout << (int)arr << endl;//指针是8字节int是4字节，强转会丢失高位地址
	//数组写法2
	int arr2[] = { 1,2,3,4,5 };//系统自动认为有5个元素
	//第三种写法
	int arr3[5];
	arr3[0] = 1;
	arr3[1] = 2;
	arr3[2] = 3;
	arr3[3] = 4;
	arr3[4] = 5;
	cout << arr3[0] << arr3[1] << arr3[2] << arr3[3] << arr3[4] << endl;
	return 0;
}