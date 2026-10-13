#include<iostream>
using namespace std;
int main()
{
	//1.const修饰指针 常量指针
	int a = 10;
	int b = 20;
	const int* p1 = &a;
	p1 = &b;//指针指向可以改，指向的内存中的数值无法修改
	//*p1 = 88;报错，显示无法修改
	//2.const修饰常量 指针常量
	int* const p2 = &a;
	//p2 = &b;报错，指针指向不可以改，但指针指向的内存中的值可以改
	*p2 = 88;
	//3.const修饰指针与常量
	const int* const p3 = &a;
	//p3 = &b;
	//*p3 = 88;全部报错，二者皆不能修改
	//const 理解为常量 * 理解为指针，const在前便是常量指针，* 在前便是指针常量
	//const修饰指针，指针指向便可以更改，修饰常量，数值便可以修改

	return 0;
}