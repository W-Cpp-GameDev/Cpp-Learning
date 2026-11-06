#include<iostream>
using namespace std;
//struct 默认权限为公共
struct c1
{
	int m1;
};
class c2
{
	int m2;
};
int main()
{
	c1 C1;
	C1.m1 = 99;
	c2 C2;
	//C2.m2;报错，为私有，不可访问
	return 0;
}