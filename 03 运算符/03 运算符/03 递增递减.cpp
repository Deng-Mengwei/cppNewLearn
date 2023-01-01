#include<iostream>
using namespace std;

int main3() {
	//1. 前置递增
	int a = 10;
	++a;//变量+1
	cout << "a=" << a << endl;

	//2.后置递增
	int b = 10;
	b++;//变量+1
	cout << "b=" << b << endl;

	//3.前置和后置的区别
	//前置递增，先让百年来+1，然后表达式运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;//11
	cout << "b2=" << b2 << endl;//110

	//后置递增，先进行表达式运算，后让变量+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3=" << a3 << endl;//11
	cout << "b3=" << b3 << endl;//100

	system("pause");

	return 0;
}