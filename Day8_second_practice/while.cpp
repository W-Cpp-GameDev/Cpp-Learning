#include<iostream>
using namespace std;
#include<ctime>
int main()
{
	//猜数游戏,首先要让计算机随机数
	srand((unsigned int)time(NULL));//利用时间来生成真正的随机数
	int a = rand() % 100 + 1;
	//cout << a << endl;此行代码注释掉
	//用户输入猜测
	while(1){
	int user = 0;
	cout << "请输入您的猜测：" << endl;
	cin >> user;
	//循环,大了显示偏大小了显示偏小
	
		if (user < a) {
			cout << "偏小了您再试试" << endl;
		}
		if (user > a) {
			cout << "偏大了，您再试试" << endl;
		}
		if (user == a) {
			cout << "您简直是神了这么快就猜对了" << endl;
			break;//终止循环
		}
	}
	return 0;
	
}