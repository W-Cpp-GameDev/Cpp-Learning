#include<iostream>
using namespace std;
class Person
{
public:
	void  show01()
	{
		cout << "show01"<<endl;
	}
	void show02()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "age:" <<Age << endl;//这里Age默认就是this->Age,传入的指针是NULL，所以返回不了Age
	}
	int Age = 0;
};
void test()
{
	Person *p = NULL;
	p->show01();
	p->show02();
}
int main ()
{
	test();
	return 0;
}