#include<iostream>
using namespace std;
int main() {
	int pig_1 = 0;
	int pig_2 = 0;
	int pig_3 = 0;
	cout << "请输入第一只猪的重量" << endl;
	cin >> pig_1;
	cout << "请输入第二只猪的重量" << endl;
	cin >> pig_2;
	cout << "请输入第三只猪的重量" << endl;
	cin >> pig_3;
	if (pig_1 > pig_2)
	{
		if (pig_2 > pig_3) {
			cout << "1最重";
		}
		else
		{
			if (pig_1 > pig_3)
			{
				cout << "1最重";
			}
			else
			{
				cout << "3最重";
			}
		}
	}
	else
	{
		if (pig_2 > pig_3)
		{
			cout << "2最重";
		}
		else
		{
			cout << "3最重";
		}
	}
}