#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 100,200,300,400,500 };
	//找出最大值
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		
	}

	cout << max << endl;
	return 0;
}