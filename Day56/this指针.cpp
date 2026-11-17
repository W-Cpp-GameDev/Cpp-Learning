#include<iostream>
using namespace std;
//1.解决名称冲突
class Person
{
public:
	Person(int age)
	{
		//this指针指向 被调用的成员函数 所属的对象
		this->age = age;
	}
	Person& ageadd(Person &p)
	{
		this->age += p.age;
		return *this;
	}
	int age = 0;
};
//2.返回对象本身用 *this
void test01()
{
	Person p1(19);
	cout << "p1年龄:" <<p1.age<< endl;
 }
void test02()
{
	Person p01(10);
	Person P02(10);
	P02.ageadd(p01).ageadd(p01).ageadd(p01);
	cout << "P02年龄:" << P02.age << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}