#include<iostream>
using namespace std;
//&取址符，引用符
// *取值，定义指针
//交换函数

//1.值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
}

//2.地址传递
void mySwap02(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "swap02 a=" << *a << endl;
	cout << "swap02 b=" << *b << endl;

}

//3.引用传递
//里面的a和外面的b修改会同步
void mySwap03(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap03 a=" << a << endl;
	cout << "swap03 b=" << b << endl;

}


int main3() {
	//函数传参时，可以利用引用的技术让形参修饰实参

	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap03(a, b);//别名和原名一样效果
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}