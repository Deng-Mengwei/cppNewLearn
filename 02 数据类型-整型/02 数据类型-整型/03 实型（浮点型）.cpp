#include<iostream>
using namespace std;

int main3() {
	//1.单精度 float 7
	//2.双精度 double 15 or 16
	//默认情况下，输出一个小数，会显示出6位有效数字
	float f1 = 3.14f;//不加的话先默认为double,再转化为float

	cout << "f1=" << f1 << endl;

	double d1 = 3.14;

	cout << "d1=" << d1 << endl;

	//统计float和double占用内存空间
	cout << "float占用的内存空间为：" << sizeof(float) << endl;//4

	cout << "double占用的内存空间为：" << sizeof(double) << endl;//8

	//科学计数法
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;

	system("pause");


	return 0;
}