//独立写一个数字反转代码,如将743变为347
#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;//第6行第7行把python与c++搞混了，c语言是先定义a为整形，再输入
	int f = a / 100;
	int s = a % 100 / 10;
	int t = a % 10;//第一次做只能想到把个位十位百位单拎出来，问了DeepSeek才想起来11行的解决办法，不过今天是完全自己写出来的
	cout << t * 100 + s * 10 + f;
	return 0;
}
