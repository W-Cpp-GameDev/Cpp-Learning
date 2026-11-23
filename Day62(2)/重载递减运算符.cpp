#include<iostream>
using namespace std;
class Myinter
{
	friend ostream& operator<<(ostream& cout, const Myinter& p);
public:
	Myinter()
	{
		myint = 10;
	}
	Myinter& operator--()
	{
		myint--;
		return *this;
	}
	Myinter operator--(int)
	{
		Myinter temp = *this;
		myint--;
		return temp;
	}

private:
	int myint;
};
ostream& operator<<(ostream& cout,const Myinter& p)
{
	cout << p.myint << endl;
	return cout;
}
void test()
{
	Myinter M;
	cout << --M << endl;
	cout << M << endl;
}
void test2()
{
	Myinter M;
	cout << M-- << endl;
	cout << M << endl;
}
int main()
{
	//test();
	test2();
	return 0;
}