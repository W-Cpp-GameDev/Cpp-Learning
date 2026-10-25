#include<iostream>
using namespace std;//针对x86编译器来说
//栈区数据注意事项---不要返回局部变量地址
//栈区的数据由编译器管理开辟和释放
int* funct(int b)//形参数据也会被放到栈区
{
	b = 19;
	int a = 10;//局部变量  存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量的地址
}
int main()
{
	int* p = funct(11);
	cout << *p<<endl;//第一次可以打印正确的数字是因为编译器做了保留
	cout << *p<<endl;//第二次数据就不会再被保留

	return 0;
}