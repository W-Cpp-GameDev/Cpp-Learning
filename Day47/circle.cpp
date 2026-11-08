#include"circle.h"
//设置半径
void Circle::setR(int R)
{
	m_R = R;
}
//获取半径
int Circle::get_R()
{
	return m_R;
}
//设置圆心
void Circle::set_Center(point Center)
{
	m_center = Center;
}
//获取圆心
point Circle::getM_center()//在类中，可以让另一个类作为本类的成员
{
	return m_center;
}