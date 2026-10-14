#include<iostream>
#include<string>
using namespace std;
//结构体，用户自定义的数据类型
//语法 struct 结构体名 {结构体成员列表}；
//1.创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，可以看到是一些内置类型的集合
//语法 struct 结构体名 {结构体成员列表}；
struct Student
{
	//成员列表
	
	//姓名
	string name;
	//年龄
	int age = 0;
	//成绩
	int score = 0;
}s3;
//通过学生类型创建具体学生
//2.1 struct Student s1 
//2.2 struct Student s2 = { ... }
//2.3 在定义结构体时顺便创建结构体变量
int main()
{
	
	//2.1 struct Student s1 
	struct Student s1;
	//给s1属性赋值，通过"."访问结构体变量中的属性
	s1.name = "天才萧炎";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名:" << s1.name << "  " << "年龄:" << s1.age << " " << "成绩 : " << s1.score << " " << endl;
    //2.2 struct Student s2 = { ... }
	struct Student s2 = { "雷德王",8,1 };
	cout << "姓名:" << s2.name << "  " << "年龄:" << s2.age << " " << "成绩 : " << s2.score << " " << endl;
    //2.3 在定义结构体时顺便创建结构体变量
	s3.name = "阿古茹";
	s3.age = 50000;
	s3.score = 100;
	cout << "姓名:" << s3.name << "  " << "年龄:" << s3.age << " " << "成绩 : " << s3.score << " " << endl;
	return 0;
}
