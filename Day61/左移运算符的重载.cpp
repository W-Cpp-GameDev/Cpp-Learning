#include<iostream>
using namespace std;
class Person
{
public:
	int m_A;
	int m_B;
	//void operator<<()括号内传什么都无法实现cout<<p;所以只能用全局函数实现重载
	//{

	//}
	Person()
	{
		m_A = 21;
		m_B = 22;
	}
};
//全局函数实现重载
ostream& operator<<(ostream &cout,Person &p)//ostream 代表输出流
{
	cout << "p.m_A = " << p.m_A << " " << "p.m_B = " << p.m_B << endl;
	return cout;//为了实现链式编程
}
void test()
{
	Person p;
	cout << p << "one perple,wang to kill gods eventually,No way!"<<endl;
}
int main()
{
	test();
	return 0;
}