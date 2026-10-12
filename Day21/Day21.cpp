#include<iostream>
using namespace std;
//函数的声明
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);//声明可以写多次，但基本真实开发时只写一次
int main()
{
	int a = 17;
	int b = 77;
	cout <<max(a, b);

	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;//即若a>b返回a,否则返回b
}