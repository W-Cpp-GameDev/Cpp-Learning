#include<iostream>
using namespace std;
int main()
{
	for (int i = 0;i < 100;i++)//for语句
	{
		if (i % 2 == 0)
		{
			continue;//偶数不输出
	}
		cout << i << endl;
	}
	return 0;
}
