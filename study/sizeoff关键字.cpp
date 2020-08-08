#include<iostream>
using namespace std;
int maisn() {
	//可以用sizeoff得出数据类型所占内存大小
	//语法：sizeoff（数据类型/变量）
	int ID = 30;
	int div = sizeof(ID);
	cout << "int占用内存空间为" << div << endl;
	system("pause");
	return 0;
};