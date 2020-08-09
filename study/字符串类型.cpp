/*字符串型
表示一块字符串
有C风格和C++风格
*/
#include<iostream>
#include<string>	//记得导入这个
using namespace std;
int main() {
	//C风格字符串
	//char 变量名[] = "值“
	char C[] = "hello world";
	cout << C << "这是用C风格输出的字符串\n";
	//C++风格字符串
	//string 变量名 = "值"
	string Cplus = "Hello World";
	cout << Cplus << "这是用C++输出的字符串\n";
};
