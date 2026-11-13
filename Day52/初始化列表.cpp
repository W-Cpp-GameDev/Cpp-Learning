#include<iostream>
using namespace std;
//初始化列表
class Person
{
public:
	//传统初始化赋值
	//Person(int a, int  b, int c)
	//{
	//	A = a;
	//	B = b;
	//	C = c;
	//}
	//初始化列表初始化属性
	Person(int a,int b,int c) :A(a), B(b), C(c)
	{

	}
	int A = 0;
	int B = 0;
	int C = 0;
};
void test01()
{
	Person p(1,2,3);
	cout << p.A << p.B << p.C << endl;
}
//void test02()
//
//{
//	Person p;
//	cout << p.A << p.B << p.C << endl;
//}
int main()
{
	//test01();
	//test02();
	test01();
	return 0;
}