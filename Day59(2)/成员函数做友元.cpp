#include<iostream>
using namespace std;
#include<string>
class Buiding;
class goodgay
{
public:
	goodgay();
	void visit();//让此函数可以访问到Buiding中的私有成员
	void visit2();//让此函数不可以访问到Buiding中的私有成员，不必操作，本来就无法访问

	Buiding* buiding;
};
class Buiding
{
	friend void goodgay::visit();
public:
	string m_sittingroom;
	
	Buiding();
private:
	string m_bedroom;
};
Buiding::Buiding()
{
	m_bedroom = "卧室";
	m_sittingroom = "客厅";
}
goodgay::goodgay()
{
	buiding = new Buiding;
}
void goodgay::visit()
{
	cout << "visit正在访问你的：" << buiding->m_sittingroom<<endl;
	cout << "visit正在访问你的：" << buiding->m_bedroom << endl;
}
void goodgay::visit2()
{
	cout << "visit2正在访问你的：" << buiding->m_sittingroom << endl;
	//cout << "visit2正在访问你的：" << buiding->m_bedroom << endl;
}
void test()
{
	goodgay gg;
	gg.visit();
}
void test2()
{
	goodgay ggg;
	ggg.visit2();
}
int main()
{
	test();
	test2();
	return 0;
}