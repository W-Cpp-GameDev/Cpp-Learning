//函数的分文件编写
#include<iostream>
using namespace std;
#include"swap.h"
//void swap(int a, int b);//函数的声明
//void swap(int a, int b)//函数的定义
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	
//	cout << a << "  " << b << endl;
//}
/*
 1.创建.h后缀名的头文件
 2.创建.cpp后缀名的源文件
 3.在头文件中写函数的声明
 4.在源文件中写函数的定义
*/

int main()
{
	int a = 21;
	int b = 90;
	swap(a, b);
	return 0;
}