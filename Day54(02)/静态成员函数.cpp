#include<iostream>
using namespace std;
//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Person
{
public:
	static void func()
	{
		M_a = 100;//静态成员函数 可以访问静态成员变量
		//M_b = 9;静态成员函数 不可以访问非静态成员变量，无法区分到底是哪个对象下的M_b;
		cout << "static void func()调用" << endl;
	}
	static int M_a;//静态成员变量
	int M_b = 0;;//非静态成员变量
	//静态成员函数也是有访问权限的
private:
	static void func2()
	{

	}

};
int Person::M_a = 0;
void test()
{
	//1.通过对象调用
	Person p;
	p.func();
	//2.通过类名调用
	Person::func();

	//Person::func2();无法访问
}
int main()
{
	test();
	return 0;
}