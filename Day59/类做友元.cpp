#include<iostream>
using namespace std;
#include<string>
class Buiding;
class goodgay
{
public:
	goodgay();
	void visit();
public:
	Buiding* buiding;

};
class Buiding
{
	friend class goodgay;
public:
	Buiding();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};
goodgay::goodgay()
{
	buiding = new Buiding;
}
void goodgay:: visit()
{
	
	cout <<"好基友正在访问你的" <<buiding->m_sittingroom << endl;
	cout << "好基友正在访问你的" << buiding->m_bedroom << endl;
}
Buiding::Buiding()
{
	m_bedroom = "卧室";
	m_sittingroom = "客厅";
}
void test()
{
	goodgay gg;
	gg.visit();

}
int main()
{
	test();
	return 0;
}