#include<iostream>
using namespace std;
const double PI = 3.14;
//设计一个圆类，求圆的周长
//圆周长公式 2 * PI * //半径
//class代表设计一个类，类后面紧跟着的就是类名称
class circle
{
	//访问权限
	//公共权限
public:
	//属性
	//半径
	double m_r;

	//行为
	//获取圆的周长
	double caculate_C()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过圆类 创建具体的圆（对象）
	//实例化，通过一个类，创建一个对象的过程
	circle c1;
	//给圆对象的属性进行赋值
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.caculate_C()<< endl;
	return 0;
}