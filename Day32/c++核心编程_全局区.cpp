#include<iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;
//const修饰的全局变量，即全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main()
{
	//全局区 
	//全局区中存放：全局变量  静态变量  常量

	//创建一个普通局部变量  只要写在函数内的都是局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址:\t" << &a << endl;
	cout << "局部变量b的地址:\t" << &b << endl;
	cout << "全局变量g_a的地址:\t" << &g_a << endl;
	cout << "全局变量g_b的地址:\t" << &g_b << endl;
	//静态变量  在普通变量前面加static，就变成了静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址:\t" << &s_a << endl;
	cout << "静态变量s_b的地址:\t" << &s_b << endl;
	//常量
	//常量包括  
	//字符串常量 双引号括起来的都是字符串常量
	cout << "字符串常量的地址:\t" << &"hello wold" << endl;
	//还包括const修饰的变量
	//const修饰的变量又包括  const修饰的全局变量 和 const修饰的局部变量
	cout << "const修饰的全局变量即全局常量c_g_a的地址:\t" << &c_g_a << endl;
	cout << "const修饰的全局变量即全局常量c_g_b的地址:\t" << &c_g_b << endl;
	int c_l_a = 10;
	int c_l_b = 10;
	cout << "const修饰的局部变量即局部常量c_g_a的地址:\t" << &c_l_a << endl;
	cout << "const修饰的局部变量即局部常量c_g_b的地址:\t" << &c_l_b << endl;
	return 0;
}