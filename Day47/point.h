#pragma once
#include<iostream>
using namespace std;
class point
{
private:

	//横坐标
	int m_X;
	//纵坐标
	int m_Y;
public:
	//设置X
	void set_X(int x);
	//获取X
	int get_X();
	//设置Y
	void set_Y(int y);
	//获取Y
	int get_Y();
};