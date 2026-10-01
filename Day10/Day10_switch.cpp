#include<iostream>
using namespace std;
int main()
{
	//让用户选择游戏难度
	cout << "请选择难度_输入数字" << endl;
	cout << "1.简单" << endl;
	cout << "2.困难" << endl;
	cout << "3.地狱" << endl;
	int style = 0;
	cin >> style;
	switch (style)
	{
		case 1:{
			cout << "将为您切换简单模式" << endl;
			break;//停止系统
		}
		case 2: {
			cout << "将为您切换困难模式" << endl;
			break;
		}
		case 3: {
			cout << "将为您切换地狱模式" << endl;
			break;
		}
	}
}