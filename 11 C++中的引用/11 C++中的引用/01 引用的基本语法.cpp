#include<iostream>
using namespace std;

int main1() {

	//引用基本语法
	//数据类型 &别名=原名

	int a = 10;

	int& b = a;

	cout << a << endl;//也会是20，因为指针是对同一块内存
	cout << b << endl;//也会是20，因为指针是对同一块内存

	b = 20;

	cout << a << endl;//也会是20，因为指针是对同一块内存
	cout << b << endl;//也会是20，因为指针是对同一块内存

	system("pause");

	return 0;

}