#include<iostream>
using namespace std;

int main2() {
	//int& b;错误，不可以没有等于a或其他，
	int a = 10;

	// 1.引用必须初始化

	//int& b;//错误代码
	int& b = a;
	//2.引用初始化后就不可以更改了
	int c = 20;

	b = c;//赋值操作，而不是更改引用

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	
	system("pause");

	return 0;
}