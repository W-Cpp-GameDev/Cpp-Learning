#include<iostream>
using namespace std;
//函数重载满足的条件
//1.在同一作用域内
//2.函数名相同
//3.函数的参数类型不同，或顺序不同，或个数不同
void func()
{
	
	cout << "func()" << endl;
}
void func(int a)
{
	cout << "func(int a)" << endl;
}
void func(int a,int b)
{
	cout << "func(int a,int b)" << endl;
}
void func(int a, double b)
{
	cout << "int doule" << endl;
}
void func(double b, int a)
{
	cout << "double int" << endl;
}//函数名可以一样，但在参数方面要不同，以便编译器做区分
//int func()
//{
//	cout << "func" << endl;
//}函数的返回值类型不同不可以做为函数重载的条件
int main()
{
	int a = 9;
	double b = 3.14;
	func(a,a);
	return 0;
}