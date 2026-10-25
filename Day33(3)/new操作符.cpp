#include<iostream>
using namespace std;
//1.new的基本语法
int* func()
{
	//在堆区创建整形数据
	//new返回的是 该数据类型的指针
	int* p = new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理开辟与释放
	//如果想释放堆区的数据，利用关键字  delete
	delete p;
	//cout << *p << endl;//内存已经被释放，再次访问就是非法操作，导致报错警告
}
void test02()
{
	//创建10个整型数据数组的，在堆区
	int * arr = new int[10];
	for (int i = 0;i < 10;i++)
	{
		arr[i] = i + 100;//为十个元素赋值
	}
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区的数组
	//释放数组时，要加[]才可以
	delete[] arr;
}
int main()
{
	test01();
	test02();
	return 0;
}