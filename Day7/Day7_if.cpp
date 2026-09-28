#include<iostream>
using namespace std;
int main()
{
	//if语法 ：if(条件){满足条件后执行的代码}
	int a = 0;
	cout << "请输入您的高考数学成绩 :" << endl;
	cin >> a;
	if (a >= 130)//此处不加“;”若加了下边代码不管满不满足条件都会执行
	{
		cout << "您是个天才" << endl;
	}
	
	return 0;
}
