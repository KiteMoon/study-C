#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入数值A" << endl;
	cin >> a;
	cin >> b;
	cout << "请输入数值B" << endl;
	c = (a > b ? a : b);
	cout << c;
}