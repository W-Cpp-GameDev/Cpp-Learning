#include<iostream>
using namespace std;
/*
     1 有参有返回值
     2 有参无返回值
     3 无参有返回值
     4 无参无返回值


*/
//1,
int test1(int a)
{
    cout << "test1中a = " << a << endl;
    return a;
}
//2,
//无返回值用void声明
void test2 (int a)
{
    cout << "test2 = " << a<<endl;
}
//3，
int test3()
{
    cout << "test3 = " ;
    return 520;
}
//4,
void test4()
{
    cout << "test4 " << endl;
}



int main()
{
    //调用 test1
    int a = 999;
    test1(a);
    //调用test2
    test2(a);
    //调用test3
    int num = test3();
    cout << num << endl;
    //调用test4
    test4();

    return 0;
}