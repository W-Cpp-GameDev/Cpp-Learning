#include<iostream>
using  namespace std;
//成员变量和成员函数分开存储
class Person
{
	int A;//非静态成员，属于类的对象上
	static int K;//静态成员对象，不属于类的对象上
	void t01()//非静态成员函数，不属于类对象上
	{

	}
	static void t02()//静态成员函数
	{

	}
};
void test01()
{
	//空对象内存为一
	//C++编译器会给每个空对象也分配一个内存空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	Person p;
	cout << "sizeof p:" << sizeof(p) << endl;
}
void test02()
{
	Person p;
	cout << "sizeof p:" << sizeof(p) << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}