#include<iostream>
using namespace std;
class Building
{
	friend void goodguys();
public :
	Building()
	{
		Sitingroom = "客厅";
		Bedroom = "卧室";
	}
	string Sitingroom;
private:

	string Bedroom;
};
void goodguys()
{
	Building p;
	cout << "杰哥正在进入你的：" << p.Sitingroom<<endl;
	cout << "杰哥正在进入你的: " << p.Bedroom << endl;
}
int main()
{
	goodguys();
	return 0;
}