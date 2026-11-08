#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//设置点类
//class point
//{
//private:
//
//	//横坐标
//	int m_X;
//	//纵坐标
//	int m_Y;
//public:
//	//设置X
//	void set_X(int x)
//	{
//		m_X = x;
//	}
//	//获取X
//	int get_X()
//	{
//		return m_X;
//	}
//	//设置Y
//	void set_Y(int y)
//	{
//		m_Y = y;
//	}
//	//获取Y
//	int get_Y()
//	{
//		return m_Y;
//	}
//};
//设置圆类
//class Circle
//{
//private:
//	//圆心
//	point m_center;
//	//半径
//	int m_R;
//public:
//   //设置半径
//	void setR(int R)
//	{
//		m_R = R;
//	}
//	//获取半径
//	int get_R()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void set_Center(point Center)
//	{
//		m_center = Center;
//	}
//	//获取圆心
//	point getM_center()//在类中，可以让另一个类作为本类的成员
//	{
//		return m_center;
//	}
//
//};
//判断点与圆关系
void isinCircle(Circle& c, point& center)
{
	//计算点与圆心距离
	int dis = (center.get_X() * center.get_X() - c.getM_center().get_X() * c.getM_center().get_X());
	int RR = c.get_R() * c.get_R();
	if (dis == RR)
	{
		cout << "在圆上" << endl;
	}
	else if (dis > RR)
	{
		cout << "在圆外" << endl;
	}
	else
	{
		cout << "在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c1;
	point C1;
	C1.set_X(10);
	C1.set_Y(0);
	c1.setR(10);
	c1.set_Center(C1);
	//创建点
	point C2;
	C2.set_X(10);
	C2.set_Y(10);
	//判断关系
	isinCircle(c1, C2);
	return 0;
}