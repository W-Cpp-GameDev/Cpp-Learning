#include<iostream>
using namespace std;
class Person
{
	//friend Person& operator+(Person& p1, Person& p2);
	//friend void test1();
	friend void test2();
	friend Person operator+(Person& p, int n);
	friend void test3();
public:
	//通过成员函数实现加号重载
	Person& operator+(Person p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
public:
	Person()
	{
		m_A = 18;
		m_B = 19;
	}
private:
	int m_A;
	int m_B;
};
//函数重载版本
Person operator+(Person& p, int n)
{
	Person temp;
	temp.m_A = p.m_A + n;
	temp.m_B = p.m_B + n;
	return temp;
  }
//通过全局函数实现加号的重载
//Person& operator+(Person& p1, Person& p2)
//{
//	Person p3;
//	p3.m_A = p1.m_A + p2.m_A;
//	p3.m_B = p1.m_B + p2.m_B;
//	return p3;
//}
//void test1()
//{
//	//Person p1, p2,p3;
//	//p3= p1 + p2;
//	//cout << p3.m_A << endl;
//	//cout << p3.m_B << endl;
//}
void test2()
{
	Person p1, p2,p3;
	p3 = p1 + p2;
	cout <<p3.m_A << endl;
	cout <<p3.m_B << endl;
}
//运算符重载也可以发生函数重载
void test3()
{
	Person p01,p4;
	p4 = p01 + 10;
	cout << p4.m_A << endl;
	cout << p4.m_B << endl;
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}