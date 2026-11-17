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
	Person& ageadd(Person &p)//若写成Person ageadd(Person &p) P02年龄仍为20，因为这时拷贝函数会创建新的副本，变的是副本
	{
		this->age += p.age;
		//this 指向P02的指针，而*this 指向的就是P02这个对象本体
		return *this;//对应29行，返回的是P02本身
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
	//链式编程思想
	P02.ageadd(p01).ageadd(p01).ageadd(p01);
	cout << "P02年龄:" << P02.age << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}