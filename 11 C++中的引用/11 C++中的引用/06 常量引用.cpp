#include<iostream>
using namespace std;
//用来修饰形参，防止误操作

void showValue(const int &val) {
	//函数中不要修改形参！！

	//val = 1000;//加了const 就会报错

	cout << "val=" << val << endl;

}

int main6() {
	//int a = 10;
	//int& ref = a;//int& ref = 10;错误，引用必须引一块合法的内存空间

	//加上const之后，编译器将代码修改 int temp=10; const int &ref=temp;
	//const int& ref = 10;

	//ref = 20;//加入const之后变为只读，不可修改

	int a = 100;

	showValue(a);

	cout << "a=" << a << endl;
	system("pause");

	return 0;
}