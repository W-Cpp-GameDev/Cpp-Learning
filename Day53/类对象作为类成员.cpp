#include<iostream>
using namespace std;
#include<string>
class Phone
{
	public:
		string pinpai;
		Phone(string pin)
		{
			pinpai = pin;
			cout << "Phone构造调用" << endl;
		}
		~Phone()
		{
			cout << "Phone析构调用" << endl;
		}
};
class Person
{
public:
	string M_name;
	Phone P_name;
	Person(string name, string pinpai) :M_name(name),P_name(pinpai)//相当于隐式转换 Phone P_name = pinpai;
	{
		M_name = name;
		P_name.pinpai = pinpai;
		cout << "Person构造调用" << endl;
	}
	~Person()
	{
		cout << "Person析构调用" << endl;
	}
};
void test()
{
	Person p("高达", "苹果pro Max");
	cout << p.M_name << "偷了" << p.P_name.pinpai << endl;
}
int main()
{
	test();//构造时先构造对象成员，再构造本类，析构时与构造时相反（当类中成员是其他类对象时我们叫对象成员）
	return 0;
}