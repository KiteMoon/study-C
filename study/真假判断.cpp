#include<iostream>
using namespace std;

int main() {
	//逻辑运算符 - 与&&
	//0为假，其余数值为真
	int a = 0;
	int b = 0;
	int test = 0;
	cout << "请输入a";
	cin >> a;
	cout << "请输入b";
	cin >> b;
	cout << "请输入c";
	cin >> test;
	if ((test > a) && (test < b))
	{
		cout << "True";
		//这里是&&举个例子，如果test的值大于a小于b则为真，否则为假
	};
	cout << "False";
	return(0);

	//同真为真，其余为假
}