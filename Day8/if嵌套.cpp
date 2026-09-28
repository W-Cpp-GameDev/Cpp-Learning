#include<iostream>
using namespace std;
int main()
{
	//让用户输入分数
	int score = 0;
	cout << "请输入你的高考分数；" << endl;
	cin >> score;
	//显示用户分数
	cout << "您的成绩为:" << score << endl;
	//条件140神话
	if (score >= 140) {
		cout << "您的天赋为神话" << endl;

	}
	//120赋能
	else if (score >= 120) {
		cout << "您的天赋为赋能" << endl;
		if (score > 130) {
			cout << "恭喜你有望成为神话" << endl;
		}
	}
	//100黄金
	else if (score >= 100) {
		cout << "您的天赋为黄金" << endl;

	}
	//90及格
	else if (score >= 90) {
		cout << "您需再接再厉" << endl;
	}
	else {
		cout << "要加油了" << endl;
		return 0;
	}

}