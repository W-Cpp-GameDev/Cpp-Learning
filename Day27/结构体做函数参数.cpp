#include<iostream>
using namespace std;
#include<string>
//创建学生结构体
struct student
{
	string name;
	int age;
};
//创建打印学生元素的函数
//值传递
void printstudent1(struct student s)
{
	s.age = 199;
	cout << "子函数1中:" << "姓名:" << s.name << " " << "年龄:" << s.age << endl;
}
//地址传递
void printstudent2(struct student* p)
{
	p->age = 999;
	cout << "子函数2中:" << "姓名:" << p->name << " " << "年龄:" << p->age << endl;
}
int main()
{
	student s;
	s.name = " 乔治";
	s.age = 12;
	printstudent1(s);
	printstudent2(&s);
	cout << "main函数中 :" << "姓名:" << s.name << " " << "年龄:" << s.age << endl;
	return 0;
}