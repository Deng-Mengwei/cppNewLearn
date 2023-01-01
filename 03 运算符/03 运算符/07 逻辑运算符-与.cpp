#include<iostream>
using namespace std;

int main7() {
	//逻辑 与 两个条件都为真，结果才为真 &&
	int a = 10;
	int b = 10;

	cout << (a && b) << endl;

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//同真为真，其余为假

	system("pause");

	return 0;
}