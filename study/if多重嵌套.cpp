#include<iostream>
using namespace std;
int main() {
	//提示输入分数
	int a = 0;
	cout << "请输入你的分数";
	cin >> a;
	//显示分
	cout << "您的分数为" << a << "正在查询录取情况" << endl;
	//判断
	//大于600一本 
		//大于700分 北大
		//大于650分 清华
		//其余	人大
	//大于500二本 
	//大于400三本 
	//其余按照没上计算
	if (a > 600)
	{
		cout << "恭喜考上一本" << endl;
		if (a > 700)
		{
			cout << "恭喜考上北大" << endl;
		}
		else if (a > 650)
		{
			cout << "恭喜考上清华" << endl;
		}
		else
		{
			cout << "恭喜你无缘北大清华" << endl;
		}
	}
	else if (a > 500)
	{
		cout << "恭喜考上二本" << endl;
	}
	else if (a > 400)
	{
		cout << "恭喜考上三本" << endl;
	}
	else
	{
		cout << "恭喜你炸了" << endl;
	}
	return(0);
}
