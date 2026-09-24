#include<iostream>
using namespace std;
int main()
{
	float f1 = 3.1415926f;//加f是将3.1415926变为单精度（float），如果不加，编辑会认为它是双精度（double），可以减少一次转换
	double d1 = 3.1415926;
	//sizeof关键字查看所占字节
	cout << "f1所占字节为：" << sizeof(f1) << endl;
	cout << "d1所占字节为：" << sizeof(d1) << endl;
	return 0;

}