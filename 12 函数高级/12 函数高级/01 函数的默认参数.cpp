#include<iostream>
using namespace std;
//函数的默认参数
int func(int a, int b = 20, int c = 30) {//b c都有默认值的

	return a + b + c;

}
 
//我传了，就用我的数据，如果我没传入，就用默认值
//语法:返回值类型 函数名（形参=默认值）{}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左往右都必须有默认值
//int func2(int a, int b = 20, int c) {//b c都有默认值的
//
//	return a + b + c;
//
//}//c 不赋值的话，就会报错

//2.如果函数声明有默认参数，函数的实现就不能有默认参数了(二意性，不行！)
//声明和实现只能有一个默认参数！！一定不可以有歧义
int func2(int a=10, int b=10);

int func2(int a, int b) {

	return a + b;
}
int main1() {

	cout << func(10) << endl;
	cout << func(30) << endl;

	cout << func2(20) << endl;

	system("pause");

	return 0;
}