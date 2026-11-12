#include<iostream>
using namespace std;
//深拷贝与浅拷贝
class Person
{
public:
	Person()
	{
		cout << "默认构造" << endl;
	}
	Person(int age,int height)

	{
		cout << "有参构造" << endl;
		Age = age;
		Height = new int(height);
	}
	~Person()
	{
		//析构代码，将堆区开辟的数据做释放操作
		if (Height != NULL)
		{
			delete Height;
			Height = NULL;//如果利用编译器提供的拷贝构造函数，会做浅拷贝操作，堆区内存重复释放
		}
		cout << "析构函数" << endl;
		

	}
	Person(const Person& p)
	{
		cout << "拷贝构造调用" << endl;
		Age = p.Age;
		//Height = p.Height;编译器默认实现
		//深拷贝操作
		Height = new int(*p.Height);
	}
	int Age = 0;
	int* Height = 0;
};
void test01()

{
	Person p1(18, 199);
	Person p2(p1);
	cout << "p2年龄" << p2.Age << endl<< "p2身高" <<* p2.Height << endl;
}
int main()
{
	test01();
	
	return 0;
}