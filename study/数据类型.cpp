//语法类型 变量名 = 值
//int a = 0
//数据类型的意义：给数值安排合适的内存空间
//数据类型              占用空间            取值范围
//short（短整型）        2字节             -2^15~2^15-1
//int（整型）           4字节              -2^31~2^31-1
//long（长整数型）       4/4/8字节          -2^31~2^31-1
//long long（长长整数型） 8字节              -2^63~2^63-1
//超过了数值范围会变成负数
#include<iostream>

using namespace std;
int main() {
    short num1 = 10;    //短整型
    int num2 = 20;      //整型
    long num3 = 30;     //长整型
    long long  num4 = 40; //长长整型

    cout << num1 << "短整型" << num2 << "整型" << num3 << "长整型" << num4 << "长长整型";
}