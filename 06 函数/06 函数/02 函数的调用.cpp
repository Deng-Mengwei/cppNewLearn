#include<iostream>
using namespace std;

//定义加法函数
//函数定义的时候，num1和num2并没有真实的数据，他只是一个形式上的参数，称为形参
int add(int num1, int num2) {

	int num = num1 + num2;

	return num;

}

int main2() {
	//main函数中调用add函数

	int a = 10;
	int b = 10;

	//函数调用语法：函数名称（参数）
	//a和b成为实际的参数，简称实参
	int c = add(a, b);

	cout << "c=" << c << endl;

	system("pause");

	return 0;

}