#include<iostream>
using namespace std;
int main()
{
	//行<=列
	for (int lie = 1;lie < 10;lie++)
	{
		//cout << lie << endl;
		for (int hang = 1;hang <= lie;hang++)
		{
			//cout << hang;
			cout << hang << "*" << lie << "=" << hang * lie<<"\t";
		}
		cout << endl;
	}

	return 0;
}