#include<iostream>
using namespace std;
#include<string>
class MyPrint
{
public:
	void operator()(string a)
	{
		cout << a << endl;
	}
};
//仿函数非常灵活，没有固定写法
class Myadd
{
public:
	int  operator()(int a, int b)
	{
		int ret = a + b;
		return ret;
	}
};
void print(string b)
{
	cout << b << endl;
}
void test()
{
	MyPrint myprint;
	myprint("林花谢了春红，太匆匆");//使用起来像函数的调用，因此又叫仿函数
	print("自是人生长恨水长东");
}
void test2()
{
	Myadd myadd;
	int final =  myadd(12, 21);
	cout << "final = " << final << endl;
	//匿名函数
	cout << Myadd()(12,34) << endl;
}
int main()
{
	test();
	test2();
	return 0;
}