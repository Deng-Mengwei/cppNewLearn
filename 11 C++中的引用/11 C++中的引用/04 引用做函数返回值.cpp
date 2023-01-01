#include<iostream>
using namespace std;
//1.不要返回局部变量的引用
int& test01() {

	int a = 10;//局部变量存放在四区中的栈区
	return a;

}

//2.函数的调用可以作为左值
int& test02() {

	static int a = 10;//静态变量，存放在全局区，全局区上的数据，在程序结束后由系统释放
	return a;

}

int main4() {
	//引用做函数的返回值
	//int& ref = test01();

	//cout << "ref=" << ref << endl;//非法操作！！！

	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	test02() = 1000;//a=1000,ref2是a的别名
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	system("pause");

	return 0;
}