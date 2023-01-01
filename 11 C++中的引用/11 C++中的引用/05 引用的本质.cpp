#include<iostream>
using namespace std;
void func(int& ref) {
	ref = 100;//ref是引用，转换为*ref=100

}
//引用的本质是一个指针常量，引用一旦初始化后，就不可以发生改变
int main5() {
	int a = 10;

	//自动转换为 int* const ref=&a;//指针常量是指针指向不可改，也说明为什么 引用不可改
	int& ref = a;
	ref = 20;//内部发现ref是引用，自动帮助我们转换为：*ref=20;

	cout << "a=" << a << endl;
	cout << "ref：" << ref << endl;

	func(a);

	system("pause");

	return 0;

}

//C++推荐使用引用技术，因为语法方便，引用本质是指针常量