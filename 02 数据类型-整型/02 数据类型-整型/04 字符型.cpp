#include<iostream>
using namespace std;

int main4() {
	//1. 字符型变量的创建方式
	char ch = 'A';
	cout << ch << endl;

	//2.字符型变量所占内存大小
	cout << "字符型变量所占内存空间：" << sizeof(char) << endl;

	//3.字符型变量常见错误
	//char ch2 = "b";//创建字符型变量的时候，要用单引号
	// char ch3 = 'asieejwfn';//创建字符型变量的时候，单引号内只能有一个字符

	//4.字符型变量对于ascii码
	cout << (int)ch << endl;//字符型强行转化为整型 a-97 A-65
	system("pause");

	return 0;
}