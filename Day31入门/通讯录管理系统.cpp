#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
//菜单函数
void showmenu()
{
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
}
//先创建联系人结构体
struct connectperson
{
	string Name;//姓名
	int Age = {};//年龄
	int Sex = {};//性别，1男2女
	string Phonenumber;//手机号
	string Address;//家庭住址
};
//再创建通讯录结构体
struct connectionbook
{
	struct connectperson  Calllist[MAX];
	int size = 0;//通讯录中当前联系人个数
};

//1.封装添加联系人函数
void Addperson(connectionbook*abs)
{
	if (abs->size != MAX)
	{
		cout << "请输入联系人姓名" << endl;
		string name;
		cin >> name;
		abs->Calllist[abs->size].Name = name;
		cout << "请输入联系人年龄" << endl;
		int  age;
		cin >> age;
		abs->Calllist[abs->size].Age = age;
		cout << "请选择联系人性别(1-男,2-女)" << endl;
		
		while (true)
		{

			int sex;
			cin >> sex;
			switch (sex)
			{
			case 1:

				abs->Calllist[abs->size].Sex = sex;

				break;
			case 2:

				abs->Calllist[abs->size].Sex = sex;

				break;
			default:

				cout << "您输入有误请重新输入" << endl;


			}
				cout << "请输入联系人手机号" << endl;
				
					string phonenum;
				cin >> phonenum;
				abs->Calllist[abs->size].Phonenumber = phonenum;
				cout << "请输入联系人家庭住址" << endl;
				string address;
				cin >> address;
				abs->Calllist[abs->size].Address = address;
				cout << "添加成功" << endl;
	            abs->size++;
				break;

			
		}
	}
	else
		cout << "您已达添加上限请整理后重新尝试" << endl;
	system("pause");
	system("cls");
}
//检测联系人是否存在
int isExist(connectionbook* abs, string name)
{
	for (int i = 0;i < abs->size;i++)
	{

		if (abs->Calllist[i].Name == name)
			return i;
	}
	return -1;
	
}
//显示联系人函数
void Printbook(connectionbook * abs )
{
	for (int i = 0;i < abs->size;i++)
	{
		cout << "姓名:" << abs->Calllist[i].Name << "\t" << "年龄:" << abs->Calllist[i].Age << "\t" << "性别:" << abs->Calllist[i].Sex << "\t"
			<< "联系电话:" << abs->Calllist[i].Phonenumber << "\t" << "家庭住址:" << abs->Calllist[i].Address << endl;
		
	}
	system("pause");
	system("cls");
}
//删除联系人函数，只需让后面把前面覆盖掉
void popbook(connectionbook *abs)
{
	
	while (true)
	{
		string name;
		cout << "请输入您要删除的联系人姓名" << endl;
		cin >> name;
		isExist(abs, name);
		if (isExist(abs, name) == -1)
		{
			cout << "查无此人请重新输入" << endl;
		}
		else
		{
			for (int i = isExist(abs, name);i < abs->size;i++)
			{
				abs->Calllist[i] = abs->Calllist[i + 1];
			}
			abs->size--;
			break;
		}
		
	}
	system("pause");
	system("cls");
	
}
//查找函数
void  Find(connectionbook abs)
{
	string name;
	cout << "请输入您要查找的联系人姓名" << endl;
	cin >> name;
	isExist(&abs, name);
	while (true)
	{
		isExist(&abs, name);
		if (isExist(&abs, name) == -1)
		{
			cout << "查无此人请重新输入" << endl;
		}
		else
		{
			cout << "姓名:" << abs.Calllist[abs.size].Name << "\t" << "年龄:" << abs.Calllist[abs.size].Age << "\t" << "性别:" << (abs.Calllist[abs.size].Sex==1?"男":"女") << "\t"
				<< "联系电话:" << abs.Calllist[abs.size].Phonenumber << "\t" << "家庭住址:" << abs.Calllist[abs.size].Address << endl;
		}
		break;
	}
	system("pause");
	system("cls");
}
//修改联系人函数
void change(connectionbook * abs)
{
	string name;
	cout << "请输入您要修改的联系人姓名" << endl;
	
	while (true)
	{
		cin >> name;
		
		isExist(abs, name);
		if (isExist(abs, name) == -1)
		{
			cout << "查无此人请重新输入" << endl;
		}
		else
		{
			cout << "请输入联系人姓名" << endl;
			string name;
			cin >> name;
			abs->Calllist[isExist(abs, name)].Name = name;
			cout << "请输入联系人年龄" << endl;
			int  age;
			cin >> age;
			abs->Calllist[isExist(abs, name)].Age = age;
			cout << "请选择联系人性别(1-男,2-女)" << endl;
			
			while (true)
			{
				int sex;
				cin >> sex;
				switch (sex)
				{
				case 1:
				{
					abs->Calllist[isExist(abs, name)].Sex = sex;
				}
				break;
				case 2:
				{
					abs->Calllist[isExist(abs, name)].Sex = sex;
				}
				break;
			    default:
				{
					cout << "您输入有误请重新输入" << endl;
				}

				}
				cout << "请输入联系人人手机号" << endl;
				int phonenum;
				cin >> phonenum;
				abs->Calllist[isExist(abs, name)].Phonenumber = phonenum;
				cout << "请输入联系人家庭住址" << endl;
				string address;
				cin >> address;
				abs->Calllist[isExist(abs, name)].Address = address;
				cout << "修改成功" << endl;
				break;
			}
		}
		break;
		
	}
	system("pause");
	system("cls");
}
//清空联系人函数，逻辑清除就行
void clean(connectionbook abs)
{
	abs.size = 0;
	cout << "清除成功" << endl;
	system("pause");
	system("cls");
}
int main()
{
		connectionbook abs;//创建通讯录结构体变量
		
		//2.调用功能
		while (true)
		{
			//1.显示菜单
			showmenu();
			//"让用户选择功能"
			int function;
			cout << "请输入您要使用的功能代号" << endl;
			cin >> function;
			switch (function)
			{
				//		1.添加联系人
			case 1:

				Addperson(&abs);
				

				break;
				//		2.显示联系人
			case 2:

				Printbook(&abs);
				

				break;
				//		3.删除联系人
			case 3:

				popbook(&abs);
				


				break;
				//		4.查找联系人
			case 4:

				Find(abs);
				
				break;
				//		5.修改联系人
			case 5:

				change(&abs);
				

				break;
				//		6.清空联系人
			case 6:

				clean(abs);
				

				break;
				//		0.退出通讯录
			case 0:

				cout << "欢迎下次使用" << endl;
				return 0;

				break;
			default:
				
					break;
				
			}

		}
		return 0;
}