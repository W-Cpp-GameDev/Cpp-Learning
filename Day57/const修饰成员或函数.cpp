#include<iostream>
using namespace std;
//常函数
class Person
{
public:
	//this 指针本质 是指针常量 指针指向是无法修改的
	//const Person * const this;
	//在成员函数后面加const，修饰的是this指针，让指针指向的值也无法修改
	void show() const//这个const与上一行首个const相对应，这样值也无法修改了
	{
		//M = 99;//加了const后无法修改
		//this->M = 909;//默认有个 this 指针
		//this = NULL;this 指针指向无法修改
		this->NB = 99;
	}
	void ff()
	{

	}
	int M = 0;
	mutable int NB = 11;//特殊变量，即使在常函数中，也可以修改这个值,加上关键字mutable
};
//常对象
void test()
{
	const Person p;//在对象前加上const 就变为常对象
	//p.M = 99;//常对象也不可以修改值
	p.NB = 88;//特殊值可以
	//常对象只能调用常函数
	//p.ff();常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
	p.show();
}
int main()
{
	test();
	return 0;
}