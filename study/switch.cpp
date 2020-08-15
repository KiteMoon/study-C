#include<iostream>
using namespace std;
int main() {
	int a = 0;
	//switch只能用整型或者字符型，不可以是一个区间
	cout << "请输入数值A" << endl;
	cin >> a;
	switch (a)
	{
	case 10:
		cout << "芜湖起飞" << endl;
		break;//记得加这个，不然会全部跳出来
	case 9:
		cout << "芜湖" << endl;
		break;
	case 8:
		cout << "加速" << endl;
		break;
	case 7:
		cout << "可还行" << endl;
		break;
	case 6:
		cout << "啊这" << endl;
		break;
	default:
		cout << "丢人玩意" << endl;
		break;
		//按照a的值依次输出，比如a=6 则输出啊这
	}
}
