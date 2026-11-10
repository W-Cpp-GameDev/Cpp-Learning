#include<iostream>
using namespace std;
//拷贝构造函数的调用时机

class Person
{
public:
	Person()
	{
		cout << "默认构造函数调用" << endl;
	}
	Person(const Person& p)
	{
		cout << "拷贝构造函数调用" << endl;
		Age = p.Age;
	}
	Person(int i)
	{
		cout << "有参构造函数调用" << endl;
		Age = i;
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	int Age = 0;
};
//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(18);
	Person p2(p1);
	cout << "p2年龄" << p2.Age << endl;
}
//2.值传递的方式给函数参数传值
void dowork(Person p)
{

}
void test02()
{
	Person p;
	dowork(p);//值传递，会拷贝一份p，副本。
}
//3.值方式返回局部对象
Person do02()
{
	Person p;
	cout << (int*)&p << endl;
	return p;//会拷贝一份新的p来返回,但现在版本被编译器优化了，p与p01地址一样
}
void test03()
{
	Person p01 = do02();
	cout << (int*)&p01 << endl;
}
int main()
{
	test01();
	cout << endl;
	test02();
	cout << endl;
	test03();
	return 0;
}