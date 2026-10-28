#include<iostream>
using namespace std;
//1.值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01中a = " << a << endl;
	cout << "swap01中b = " << b << endl;
}
//2.地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;


}
//3.引用传递
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	mySwap01(a, b);
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;//实参值未发生改变
	mySwap02(&a, &b);
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;//值发生互换
	mySwap03(a, b);
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;//值再次互换
	return 0;
}