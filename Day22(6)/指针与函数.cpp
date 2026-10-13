#include<iostream>
using namespace std;
void swap01(int a, int b);
void swap02(int* p1, int* p2);
int main()
{
	//回顾值传递 不改变实参
	int a = 520;
	int b = 1314;
	swap01(a,b);
	cout << "a的值为:" << a << endl;
	cout << "b的值为:" << b <<endl;
	//地址传递，改变实参
	swap02(&a,&b);
	cout << "a的值为:" << a << endl;
	cout << "b的值为:" << b << endl;
	return 0;
}
void swap01(int a, int b)//值传递函数
{
	int temp = a;
	a = b;
	b = temp;
	
}
void swap02(int* p1, int* p2)//地址传递函数
{
	int temp2 = *p1;
	*p1 = *p2;
	*p2 = temp2;
}