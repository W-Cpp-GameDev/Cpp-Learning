#include<iostream>
using namespace std;
//赋值运算符重载
class Person
{
public:
	Person(int a)
	{
		M_age = new int(a);
	}
	int* M_age;
	~Person()
	{
		if (M_age != NULL)
		{
			delete M_age;
			M_age = NULL;
		}
	}
	Person& operator=(Person  &p)
	{
		//编译器提供浅拷贝，如下
		//M_age = p.M_age;

		//应先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (M_age != NULL)
		{
			delete M_age;
			M_age = NULL;
		}
		//深拷贝
		M_age = new int(*p.M_age);
		return *this;
	}
};
void test()
{
	Person p1(18);
	Person p2(21);
	Person p3(27);
	p1 = p2 = p3;//把p2所有属性做一个浅拷贝,导致堆区内存重复释放
	cout << "p1年龄:" << *p1.M_age << endl;
	cout << "p2年龄:" << *p2.M_age << endl;
	cout << "p4年龄:" << *p3.M_age << endl;
 }
int main()
{
	test();
	return 0;
}