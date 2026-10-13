#include<iostream>
using namespace std;
int main()
{
	//空指针
	//1.空指针用于给指针变量进行初始化
	int* p = NULL;
	//2.空指针不可以访问
	//0 ~ 255之间的内存编号是系统占用的，因此不可以访问
	*p = 100;//为其赋值发现报错，因为无法访问
	//野指针
	//在程序中，尽量避免出现野指针
	int* p1 = (int*)0x1100;
	cout << *p1 << endl;
	return 0;
}