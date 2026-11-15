#include<iostream>
using namespace std;
//静态成员变量
class Person
{
public:
	//所有对象都共享同一份数据
	//编译阶段就分配内存
	//类内声明，类外初始化操作
	static int M_a;
	//静态成员变量也是有访问权限的
private:
	static int M_b;
};
int Person::M_a = 110;
int Person::M_b = 88;
void test01()
{
	Person p;
	cout << p.M_a << endl;
	Person p02;
	p02.M_a = 299;
	cout << p.M_a << endl;
}
void test02()
{
	//静态成员变量不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	//1.通过对象进行访问
	Person p02;
	cout << p02.M_a << endl;
	//2.通过类名进行访问
	cout << Person::M_a << endl;
	//cout << Person::M_b << endl;类外访问不到私有静态成员变量
}
int main()
{
	test01();
	test02();
	return 0;
}