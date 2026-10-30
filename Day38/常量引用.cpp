#include<iostream>
using namespace std;
//打印函数
void show(const int& b)
{
	//b = 999;加上const之后无法修改
	cout << "b=" << b << endl;
}
int main()
{
	//常量引用
	//使用场景：用来修饰形参，防止误操作
	int a = 10;//先初始化
	//int& ref = 10;会报错，引用必须引一块合法的内存
	const int& ref = 10;//但是加上const之后就不会报错
	//加上const后，编译器将代码修改为 int temp = 10;const int & ref = temp;合法
	//ref = 20;报错，因为加上const后变为只读，无法修改
	int b = 100;
	show(b);
	cout << "b=" << b << endl;
	return 0;
}