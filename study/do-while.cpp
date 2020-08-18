#include<iostream>
using namespace std;
int main() {
	int num = 0;
	//do while语句，会先执行一次do中的语句，然后while进行判断，若判断成功则停止循环
	do
	{
		cout << num;
		num = num + 1;
	} while (num < 10);
}