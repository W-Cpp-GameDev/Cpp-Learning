#include<iostream>
using namespace std;
#include<string>
int main()
{
	//C风格字符串型语法 char 变量名[] = "" 
	//注意要加中括号
	char str1[] = "hello world";
	cout << str1 << endl;
	//C++风格字符串语法 string 变量名 = "" 还要加头文件
	string str2 = "hello world";
	cout << str2 << endl;
	return 0;
}