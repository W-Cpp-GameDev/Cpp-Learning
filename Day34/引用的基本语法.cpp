#include<iostream>
using namespace std;
int main()
{
	//引用基本语法
	//数据类型(与原名类型一致)  &别名 = 原名
	int a = 10;
	//创建引用
	int &b = a;
	cout << "a = " << a << endl;
	cout << "b =" << b << endl;
	b = 100;
	cout << "a = " << a << endl;
	cout << "b =" << b << endl;//值都发生改变，所以b就是a另一个名字，操作的同一块内存

}