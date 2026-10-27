#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	
	//1.引用必须初始化
	//int &b;  错误的，会提示引用必须初始化
	int& b = a;

	//2.引用在初始化后，不可以改变
	int c = 20;
	b = c;//这是赋值操作，而不是引用更改
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return 0;
}