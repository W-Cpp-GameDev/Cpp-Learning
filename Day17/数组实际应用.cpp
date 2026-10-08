#include<iostream>
using namespace std;
#include<string>
int main()
{
	/*
	     数学      语文       英语
    张三 100       100        100
	李四 90        100        80
	王五 20        55         70
	*/
	string names[3] = {"张三","李四","王五"};
	int score[3][3] =
	{
		{100,100,100},
		{ 90,100,80 },
		{ 20, 55, 70 }
	};
	for (int i = 0;i < 3;i++)
	{
		cout << names[i]<<" ";
		for (int j = 0;j < 3;j++)
		{
			cout << score[i][j] << "  ";
		}
		cout << endl;
	}
	//输出总成绩
	for (int i = 0;i < 3;i++)
	{
		int sum = 0;//统计总分
		cout << names[i] << " ";
		for (int j = 0;j < 3;j++)
		{
			sum += score[i][j];
		}
		cout << sum;
		cout << endl;
	}
	return 0;
}