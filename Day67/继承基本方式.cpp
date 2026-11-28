#include<iostream>
using namespace std;
class Base1
{
public:
	int M_A;
protected:
	int M_B;
private:
	int M_C;
};
//公共继承
class Son1 :public Base1
{
	void visit()
	{
		M_A = 21;//父类中的公共权限成员， 到子类中依然是公共权限
		M_B = 21;//父类中的保护权限成员， 到子类中依然是保护权限
	  //M_C = 11;//父类中的私有权限成员， 子类访问不到
	}
};

void test01()
{
	Son1 S1;
	S1.M_A = 9;
	//S1.M_B = 9;类外访问不到保护权限
}
//保护继承
class Son2 :protected Base1
{
	void visit2()
	{
		M_A = 3;//父类中的公共权限成员， 到子类中变为保护权限
		M_B = 9;//父类中的保护权限成员， 到子类中依然是保护权限
		//M_C = 9;父类中的私有权限成员， 子类访问不到
	}
};

//私有继承
class Son3:private Base1
{
	void vist3()
	{
		M_A = 3;//父类中的公共权限成员， 到子类中变为私有权限
		M_B = 9;//父类中的保护权限成员， 到子类中变为私有权限
		//M_C = 9;父类中的私有权限成员， 子类访问不到
	}
};
class grandSon :public Son3
{
	//M_A = 2;
	//M_B = 9;由此可知 Son3 中成员都成为了私有权限
	//M_C = 9;
};
int main()
{
	return 0;
}