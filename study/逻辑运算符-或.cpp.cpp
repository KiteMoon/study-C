#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	cout << "请输入A的值";
	cin >> a;
	cout << "请输入B的值";
	cin >> b;
	if (a || b)	//做个判断，如果a和b两者任意一个不是0，则输出if的数据。
	{
		cout << "输出数值均为非0，a||b结果为1" << endl;
	}
	else	//做个判断，如果a和b两者都是0，则输出else的数据。
	{
		cout << "输出数值均为0，a||b结果为0" << endl;
	}
	return(0);
}
//同假为假，其余为真