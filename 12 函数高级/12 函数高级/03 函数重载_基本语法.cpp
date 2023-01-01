#include<iostream>
using namespace std;
//函数名可以相同，提高复用性
//1.同一个作用域下 
//2.函数名称相同
//3.函数参数类型不同,或者个数不同，或者顺序不同


//1.都在全局作用域下
void func() {

	cout << "func的调用" << endl;
}
void func(int a) {

	cout << "func int a的调用!" << endl;
}
void func(double a) {

	cout << "func double a的调用!" << endl;
}
void func(int a, double b) {

	cout << "func int a, double b的调用!" << endl;
}
void func(double a, int b) {

	cout << "func double a, int b的调用!" << endl;
}
//注意事项
//函数的返回值不可以作为函数重载的条件 调用的时候 会产生歧义，这是不可以的
//void func() {
//
//	cout << "func的调用" << endl;
//}
//int func() {
//
//	cout << "func的调用" << endl;
//}

int main3() {

	func();

	func(10);

	func(3.14);

	func(10, 3.14);

	func(3.14, 10);

	system("pause");

	return 0;

}