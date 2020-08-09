//字符型
//作用：显示单个字符
//语法 char ch = 'a'
#include <iostream>
using namespace std;
int main() {
	char ID = 'a';	//创建一个字符型（要用单引号）（只能放一个字符，中文算两个）
	int(bit) = sizeof(ID);	//将ID的内存大小识别出兵赋予到bit变量
	cout << bit << "为char的内存位数\n";	//输出ID的内存位数
	cout << int(ID) << "强制转换字符型为整数型，可以输出ASCII码\n";	//输出ID的ASCII编码
	system("pause");
	return(0);

}