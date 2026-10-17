#include<iostream>
using namespace std;
#include<string>
//学生结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int ss;//成绩

};
//创建老师结构体
struct teacher
{
	string name;//姓名
	int age;//年龄
	int score;//高考成绩
	int id;//编号'
	struct student stu;//所带学生
};


int main()
{
	//结构体嵌套
	//创建老师中的各项元素
	teacher ailong;
	ailong.name = "埃隆马斯克";
	ailong.age = 46;
	ailong.score = 700;
	ailong.id = 10086;
	ailong.stu.name = "我";
	ailong.stu.age = 18;
	ailong.stu.ss = 600;
	cout << "老师姓名:" << ailong.name << endl << "老师年龄:" << ailong.age << endl << "老师高考成绩:" << ailong.score << endl << "老师编码:" << ailong.id << endl << "老师学生:"
		<< ailong.stu.name << endl << "学生年龄:" << ailong.stu.age << endl << "学生高考成绩:" << ailong.stu.ss;
}