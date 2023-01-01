#include<iostream>
using namespace std;
//函数重载的注意事项

//1.引用作为重载的条件
void func(int& a) { //int &a=10;不不合法 引用要么栈区要么堆区 不可以是常量
	cout << "func(int &a)调用" << endl;

}
void func(const int& a) {
	cout << "func(const int &a)调用" << endl;

}

//2.函数重载碰到默认参数
void func2(int a,int b=10) {

	cout << "func2(int a,int b=10)的调用" << endl;
}
void func2(int a) {

	cout << "func2(int a)的调用" << endl;
}

int main() {
	int a = 10;
	//func(a);//a是变量。可读可写 加入const 后变成只读状态 

	func(10);//合法代码

	func2(10, 10);//又可以了，没有了二意性
	//func2(10);//也是不可以的，因为这个函数 上下都是可以调用的。。。出现二意
	//只能尽量避免出现这种参数

	system("pause");

	return 0;
}