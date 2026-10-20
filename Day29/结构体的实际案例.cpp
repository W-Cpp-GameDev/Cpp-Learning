#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//创建学生结构体
struct student
{
	string sname;//姓名
	int score = 0;//分数
};
//创建老师结构体
struct teacher
{
	string tname;//姓名
	struct student sarray[5];//带的学生
};
//创建给老师和学生赋值的函数
void allocat(struct teacher tarray[],int len)
{
	//开始给老师赋值
	string nameseed = "ABCDEF";
	for (int i = 0;i < len;i++)
	{
		tarray[i].tname = "Teacher_";
		tarray[i].tname += nameseed[i];
		//给学生赋值
		for (int j = 0;j < 5;j++)
		{
			int random =  rand() % 61 + 40;
			tarray[i].sarray[j].sname = "Student_";
			tarray[i].sarray[j].sname += nameseed[j];
			tarray[i].sarray[j].score = random;
		}
	}
}
//创建打印函数
void printtotal(struct teacher tarr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << "老师姓名:" << tarr[i].tname << endl;
		for (int j = 0;j < 5;j++)
		{
			cout << "\t所带学生:" << tarr[i].sarray[j].sname <<" "<< tarr[i].sarray[j].score << endl;
		}
			
	}
}
int main()
{
	srand((unsigned)time(NULL));
	//创建老师数组
	struct teacher tarr[3];
	int len = sizeof(tarr) / sizeof(tarr[0]);
	allocat(tarr, len);
	printtotal(tarr, len);
	return 0;
}