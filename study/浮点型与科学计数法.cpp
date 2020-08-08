//浮点型
//1.单精度
//2.双精度
#include<iostream>
using namespace std;
int main() {
	//1.单精度，一般要在小数点最后加一个f,7位有效数字
	float F1 = 3.14f;
	//2.双精度，一般要在小数点最后加一个f，15-16位有效数字
	double F2 = 3.14f;
	cout << F1 << "这是单精度" << F2 << "这是双精度\n" << endl;
	cout << "这是单精度占用内存" << sizeof(F1) << "这是双精度占用内存" << sizeof(F2) << "\n" << endl;
	//科学计数法输出
	float F3 = 8e4f;
	cout << F3 << "科学计数法输出整数" << "\n" << endl;
	float F4 = 8e-4f;
	cout << F4 << "科学计数法输出小数" << "\n" << endl;
	system("pause");
	return(0);

}