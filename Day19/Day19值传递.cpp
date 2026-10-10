#include<iostream>
using namespace std;
//当定义的函数不需要返回值时，可以用void声明
void swap(int num1, int num2)
{
	//值传递
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
int main()
{
	int a = 39;
	int b = 30;
	cout << "变换前:" << a <<"  "<< b << endl;
	//调用函数
	swap(a, b);
	cout << "变换后:" << a <<"  "<< b;
	return 0;//值传递，形参改变对实参无影响
}