#include<iostream>
using namespace std;
//构造函数的分类及调用
//分类
//    按照参数分类  无参构造（默认构造）  和  有参构造
//    按照类型      普通构造函数  和  拷贝构造函数
class Person
{
public:
	//构造函数
	Person()
	{
		cout << "构造函数的_无参调用" << endl;
	}
	Person(int i)
	{
		age = i;
		cout << "构造函数的_有参调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)
	{
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	int age;
};
//调用
void print()
{
	//1.括号法
	Person p1;//默认构造函数的调用
	Person p2(10);//有参构造函数的调用
	//拷贝构造函数
	Person p3(p2);
	cout << endl;
	//注意事项
	//调用默认构造函数时不要加 ()
	//Person p1();写成这样编译器会认为这是函数的声明
	cout << "p2的年龄" << p2.age << endl;
	cout << "p3的年龄" << p3.age<<endl;//拷贝函数作用
	cout << endl;
	//2.显示法
	Person p01;
	Person p02 = Person(10);//有参构造
	Person p03 = Person(p2);//拷贝构造
	cout << endl;
	Person(10);//叫做匿名对象，特点 ：当前行执行结束后，系统会立即回收掉匿名对象
	cout << "在匿名对象释放后执行" << endl;
	//注意事项
	// 不要利用拷贝构造函数 初始化匿名对象
	//Person(p03);//编译器会认为Person（P03）=== Person P03；对象重定义
	//3.隐式转换法
	Person p4 = 10;//有参构造  相当于写了 Person p4 = Person(10)
	Person p5 = p2;//拷贝构造

}
int main()
{
	print();
	return 0;
}