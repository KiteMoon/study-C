//数据的输入
//数据输入采用cin
//语法：cin >> 变量
#include<iostream>
#include<string>
using namespace std;
int main() {
	double a = 3;	//double定义下，不然下面触发没法除出来数
	double b = 5;
	cout << a + b << endl;	//加法
	cout << a - b << endl;	//减
	cout << a * b << endl;	//乘
	cout << a / b << endl;	//除 允许小数，不允许除数为0
	int a1 = 10;	//取摸必须要用整数型才行
	int b1 = 3;	//两个小数不能取摸
	cout << a1 % b1 << endl;	//取摸是取的除法后的余数，10÷3余下1
	return(0);
}