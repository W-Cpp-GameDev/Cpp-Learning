#include<iostream>
using namespace std;
int main()
{
	//语法 char ch = 'a'(要用单引号，占一个字节，且单引号内不能写太多)
	char ch = 'a';
	cout << ch;
	cout << "ch所占字节是" << sizeof(ch) << endl;
	cout << (int)ch << endl;
	char ch2 = 'A';
	cout << (int)ch2 << endl;
	return 0;
	//若用int则将字符a强制转换成整形，且a为97，A为65
	
}