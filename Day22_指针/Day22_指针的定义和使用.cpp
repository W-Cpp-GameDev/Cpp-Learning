#include<iostream>
using namespace std;
int main()
{
	//1.定义指针
	int a = 10;
	//指针定义的语法: 数据类型(与a一致) * 指针变量名;
	int * p;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址:" << &a << endl;
	cout << "指针p = " << p << endl;//指针p就是记录a的地址的
	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加一个*代表解引用，找到指针指向的内存中的数据
	cout << "a =" << a << endl;
	cout << "*p =" << *p << endl;
	*p = 10086;
	cout << "a =" << a<<endl;
	cout << "*p= "<< *p << endl;
	//即*p就是a
	return 0;



}