#include<iostream>
using namespace std;
//1.函数形参可以有默认值
int func(int a, int b = 90, int c = 88)//但是当某个参数有默认值后，从他开始向右都要给默认值
{
	int add = a + b + c;
	return add;
}
//2.函数声明和函数的实现只能二者之一有默认值，若两个都有默认值，编译器不知道以哪个为准
int func2(int a, int b, int c);//声明
int func2(int a = 9, int b =8, int c = 88)
{
	return a + b + c;
}//实现

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	cout<<func(a, b, c)<<endl;
	cout << func2(a,b,c);
	return 0;
}