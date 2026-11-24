#include<iostream>
using namespace std;
#include<string>
class Person
{
public:
	Person(string name, int age)
	{
		M_name = name;
		M_age = age;
	}
	bool operator==(Person &p)
	{
		if (this->M_age == p.M_age && this->M_name == p.M_name)
		{
			return true;
		}
		return false;
	}
	bool operator!=(Person &p)
	{
		if (this->M_age == p.M_age && this->M_name == p.M_name)
		{
			return false;
		}
		return true;
	}
	string M_name;
	int M_age;
};
void test()
{
	Person p1("海棠", 21);
	Person p2("杜鹃", 21);
	if (p1 == p2)
	{
		cout << "p1 p2 相等" << endl;
	}
	else
	{
		cout << "p1 p2 不相等" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1 p2 不相等" << endl;
	}
	else
	{
		cout << "p1 p2 相等" << endl;
	}
}
int main()
{
	test();
	return 0;
}