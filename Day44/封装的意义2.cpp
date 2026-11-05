#include<iostream>
using namespace std;
//访问权限
	//三种
	//公共权限 public          成员 类内可以访问，类外也可以访问
	//保护权限 protected       成员 类内可以访问，类外不可以访问   子类可以访问父类中保护的内容 
	//私有权限 private         成员 类内可以访问，类外不可以访问   子类不可以访问父类中私有的内容
class person
{
	//公共权限
public:
	string m_name;//姓名
	//保护权限
protected:
	string m_car;//汽车
	//私有权限
private:
	int m_num;//银行卡密码
public:
	void func()
	{
		m_name = "alicy";
		m_car = "A8";
		m_num = 666;//类内可以访问
	}

};
int main()
{
	//实例化具体对象
	person p1;
	p1.m_name = "Jan";
	//p1.m_car = "奔驰";报错，无法访问
	//p1.m_num = 888;报错，无法访问
	return 0;
}