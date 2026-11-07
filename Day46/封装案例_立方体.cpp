#include<iostream>
using namespace std;
class Cube
{
private:
	int m_L;//长
	int m_W;//宽
	int m_H;//高
public:
	void setL(int L)
	{
		m_L = L;
	}
	void setW(int W)
	{
		m_W = W;
	}
	void setH(int H)
	{
		m_H = H;
	}
	int getL()
	{
		return m_L;
	}
	int getW()
	{
		return m_W;
	}
	int getH()
	{
		return m_H;
	}
	int getM_2(int L, int H)
	{
		return L * H;
	}
	int getV(int L, int W, int H)
	{
		return L * W * H;
	}
	bool is(Cube &c1)//利用成员函数来判断
	{

		if (c1.m_H == m_H && c1.m_L == m_L && c1.m_W == m_W)
		{
			return true;
		}
		return false;
	}
};
//bool isSame(Cube c1,Cube c2)//利用全局判断
//{
//	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
//	{
//		return true;
//	}
//	return false;
//}

int main()
{
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(20);
	cout << "面积为" << c1.getM_2(c1.getL(), c1.getH())<<endl;
	cout << "体积为" << c1.getV(c1.getH(), c1.getL(), c1.getW())<<endl;
	//bool ps = isSame(c1,c2);
	bool ps = c1.is(c2);
	if (ps)
	{
		cout << "一样" << endl;
	}
	else
	{
		cout << "不一样" << endl;
	}
	return 0;
}