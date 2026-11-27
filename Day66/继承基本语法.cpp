#include<iostream>
using namespace std;
//普通页面实现
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）"<<endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,Cpp...(公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,Cpp...(公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,Cpp...(公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//};
//继承页面实现
class BasePage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java,Python,Cpp...(公共分类列表）" << endl;
	}
};
//Java 页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java 学科视频" << endl;
	}
};
//Pythion 页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python 学科视频" << endl;
	}
};
//CPP 页面
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPP 学科视频" << endl;
	}
};
void test01()
{
	Java JA;
	JA.header();
	JA.footer();
	JA.left();
	JA.content();
	cout << "-----------------------------" << endl;
	Python PY;
	PY.header();
	PY.footer();
	PY.left();
	PY.content();
	cout << "-----------------------------" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();

}
int main()
{
	test01();
	return 0;
}