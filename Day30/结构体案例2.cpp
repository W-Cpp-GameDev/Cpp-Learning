#include<iostream>
using namespace std;
#include<string>
//创建英雄结构体
struct Hero
{
	string name;//姓名
	int age;//年龄
	string sex;//性别
};
//定义冒泡排序函数为英雄以年龄排序
void bubble(struct Hero array[], int len)
{
	struct Hero temp;//创建临时结构体存储
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (array[j].age > array[j + 1].age )
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

}
//创建打印函数
void printf(struct Hero array[], int len)
{
	for (int i = 0;i < len;i++)
		cout << "姓名:" << array[i].name << " " << "年龄:" << array[i].age << " " << "性别:" << array[i].sex << endl;
}
int main()
{
	//创建英雄数组
	struct Hero array[5] =
	{
		{ "刘备",23,"男" },
		{ "关羽",22,"男" },
		{ "张飞",20,"男" },
		{ "赵云",21,"男" },
		{ "貂蝉",18,"女" }

	};
	int len = sizeof(array) / sizeof(array[0]);
	//调用冒泡排序函数
	bubble(array, len);
	//调用打印函数
	printf(array, len);
	return 0;
}