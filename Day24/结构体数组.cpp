#include<iostream>
using namespace std;
#include<string>
//1.创建结构体
struct student
{
	//姓名
	string name;
	//年龄
	int  age;
	//成绩
	int score;

};
int main()
{
	//2.创建结构体数组
	struct student studentarr[3] =//语法 struct 结构体名 数组名[元素个数] = { {}，{}，{}，.....    }
	{
		{"张三",16,97},
		{"李四",17, 98 },
		{"王五",18,99 }
	};
	//3.给结构体数组里元素赋值
	studentarr[2].name = "赛罗";
	studentarr[2].age = 20000;
	//4.遍历结构体数组
	for (int i = 0;i < 3;i++)
	{
		cout << studentarr[i].name << " "<<studentarr[i].age << "  "<<studentarr[i].score << endl;
	}
	return 0;
}