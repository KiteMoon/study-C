#include<iostream>
#include<ctime>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	srand((unsigned int)time(NULL));//调用时间作为随机数
	a = rand() % 100;
	while (1)//如果a<10,则执行框中代码
	{
		cout << "请猜一个数字:";
		cin >> b;
		if (a > b)
		{
			cout << "猜小了，丢人" << endl;
		}
		else if (a < b)
		{
			cout << "猜大了，丢人" << endl;
		}
		else
		{
			cout << "猜对了,但是，你不觉得这么大了还玩这种游戏真的好么。。\a" << endl;
			break;
		}
	}
	return(0);
	cout << "按任意键结束";
	int stop = 0;
	cin >> stop;
}
