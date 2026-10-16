#include<iostream>
using namespace std;
//结构体指针
#include<string>
//创建结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

int main()
{
	//创建学生结构体变量
	student s =
	{

		{ "宁姚" },{ 18 },{ 100 }
	};
	//通过指针指向结构体变量
	student* p = &s;
	//通过指针访问结构体变量中的数据
	cout << p->age << " " << p->name << " " << p->score;
	
	return 0;
}