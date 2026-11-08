#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class Circle
{
private:
	//圆心
	point m_center;
	//半径
	int m_R;
public:
	//设置半径
	void setR(int R);
	//获取半径
	int get_R();
	//设置圆心
	void set_Center(point Center);
	//获取圆心
	point getM_center();//在类中，可以让另一个类作为本类的成员

};