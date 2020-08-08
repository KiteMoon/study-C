#include<iostream>
using namespace std;
//常量的定义
//1:#define 宏常量
//2：const修饰的变量
//1:#define 宏常量 使用#define + 变量名 + 数值即可
#define Day 7
//2：const修饰的变量 使用const + 数据类型 + = + 数值即可（其实就是const+变量）（但是他是一个常量）
const int IDcard = 13;
//常量不可以更改数值，但是可以提前定义
int	maindd() {
	cout << "一周有几天" << Day << endl;
	cout << "你的ID卡编号为：" << IDcard;
	system("pause");
	return	0;
	
};
