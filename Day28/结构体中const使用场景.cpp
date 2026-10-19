#include<iostream>
using namespace std;
#include<string>
struct student
{
	string name;
	int age;
	int score;
};
//创建打印函数
void printstudent1(struct student s)//值传递会拷贝很多数据，占很大内存
{
	cout << "子函数1中:" << "姓名:" << s.age << " " << "年龄:" << s.name << "分数:" << s.score << endl;
 }

void printstudent2(const student* s)//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来。指针只占4个字节
{
	//s->age = 190;//形参前加const之后可以防止修改，修改就会报错，只可以读不可以改
	cout<< "子函数2中:" << "姓名:" << s->age << " " << "年龄:" << s->name << "分数:" << s->score << endl;
}
int main()
{
	//创建学生结构体
	student s = { "李华",15,100 };
	//利用打印函数打印学生结构体
	printstudent1(s);
	printstudent2(&s);
	cout << "main函数中:" << "姓名:" << s.age << "年龄:" << s.name << "分数:" << s.score;

	return 0;
}