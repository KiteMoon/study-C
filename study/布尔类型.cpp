//布尔类型
//占用一个内存字节
//只有true和false
//true=1 false=0
#include<iostream>
using namespace std;
int main() {
	//创建一个布尔类型
	bool flag = true;
	bool flag_false = false;
	//输出布尔类型数值所占用内存
	cout << sizeof(flag) << endl;
	cout << flag << "输出真的类型" << endl;;
	cout << flag_false << "输出假的类型" << endl;;
	system("pause");
	return(0);
}