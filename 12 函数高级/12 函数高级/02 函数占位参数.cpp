#include<iostream>
using namespace std;
//占位参数 后面单独的int就是占位

//目前阶段的占位参数 我们还用不到，后面课程中会用到
//占位参数 还可以有默认参数 ？？？是不是更没有意义了啊
void func(int a,int =10) {

	cout << "this is func" << endl;

}


int main02() {

	func(10, 10);
	//后面这个占位符有什么用？

	system("pause");

	return 0;
}