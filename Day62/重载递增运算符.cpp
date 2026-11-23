#include<iostream>
using namespace std;
class Myint
{
	friend ostream& operator<<(ostream& cout, Myint p);
public:
	Myint()
	{
		
		MYint = 10;
	}
	Myint& operator++()
	{
		MYint++;
		return *this;
	}
	Myint operator++(int)
	{
		Myint temp = *this;
		MYint++;
		return temp;

	}
private:
	int MYint;
};
ostream& operator<<(ostream& cout,Myint p)
{
	cout << p.MYint << endl;
	return cout;
}
void test()
{
	Myint M;
	cout << ++M << endl;
	cout << M << endl;
}
void test2()
{
	Myint M;
	cout << M++ << endl;
	cout << M << endl;
}
int main()
{
	//test();
	test2();
	return 0;
}