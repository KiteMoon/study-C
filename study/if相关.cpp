#include<iostream>
using namespace std;
int main() {
	int a = 0;
	cout << "请输入你的分数";
	cin >> a;
	if (a >= 529)//进行第一次判断
	{
		cout << "恭喜你考上本科一批次" << endl;
	}
	else if (a >= 443)//进行第二次判断
	{
		cout << "恭喜你考上本科二批次" << endl;
	}
	else if (a >= 150)//进行第三次判断
	{
		cout << "恭喜你考上专科批次" << endl;
	}
	//进行三次判断，若第一次判断没通过，自动进入第二个判断，直到判断成功，语法 if   else if  
}