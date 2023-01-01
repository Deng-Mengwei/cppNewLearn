#include<iostream>
using namespace std;

//栈区数据注意事项  ---  不要返回局部变量地址
//栈区数据由编译器管理开辟和释放
//不要返回

int* func(int b) {//形参数据也会放到栈区

	int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完以后会自动释放
	return &a;//返回局部变量的地址
}
int main2() {

	//接受func函数的返回值
	int* p = func(1);

	cout << *p << func(1) << endl;//第一次也许可以打印正确的数字，是因为编译器做了保留
	cout << *p << func(1) << endl;//输出乱码  非法操作！！

	system("pause");

	return 0;
}