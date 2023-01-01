#include<iostream>
using namespace std;

int main10() {
	//do while 语句
	//先执行，再循环
	//在屏幕中输出0-9个数字
	int num = 0;

	do {
		cout << num << endl;
		num++;
	}while (num < 10);

	//int num = 0;//之前已经int定义过一次了，再来一次一定会报错

	//do {
	//	cout << num << endl;
	//	num++;
	//} while (num);//死循环

	//while (num) {
	//	cout << num << endl;
	//	num++;
	//}//不执行

	//do while和while的区别在于do_while 会限制性一次循环语句
	system("pause");

	return 0;
}