#include<iostream>
using namespace std;

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	int a = 100;
	int b = 299;
	int c = add(a, b);
	cout << "c =" << c;
	return 0;
}