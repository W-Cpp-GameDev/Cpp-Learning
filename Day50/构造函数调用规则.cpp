#include<iostream>
using namespace std;
//构造函数的调用规则
//1.创建一个类，C++编译器会给每个类都添加至少三个函数
//默认构造函数（空实现）
//析构函数     （空实现）
//拷贝构造函数 （值拷贝）
//2.如果我们写了有参构造，编译器就不再提供默认构造，依然提供拷贝构造

//如果我们写了拷贝构造函数，编译器就不提供其他普通函数
class Person
{
public:
	//Person()

	//{

	//	cout << "默认构造函数调用" << endl;
	//}
	//Person(int i)
	//{
	//	cout << "有参构造函数调用" << endl;
	//	Age = i;
	//}
	Person(const Person& p)
	{
		Age = p.Age;
		cout << "拷贝构造函数调用" << endl;
	}
	//~Person()
	//{
	//	cout << "析构函数调用" << endl;
	//}
	int Age = 0;
};
void test01()
{
	//Person p(19);报错
	//Person p2(p);//编译器自己写了拷贝构造
	//cout << "p2年龄" << p2.Age << endl;
}
void test02()
{
	//Person p;报错，提示没有默认构造
	//Person p(11);报错
	//Person p3(p);
	//cout << "p3年龄" << p3.Age << endl;

}

int main()
{
	//test01();
	//test02();
	test02();
	return 0;
}