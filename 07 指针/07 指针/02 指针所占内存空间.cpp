#include<iostream>
using namespace std;

int main2() {

	//指针所占的内存空间大小
	int a = 10;
	int *p;
	p = &a;

	//int *p=&a;
	cout << "sizeof(int*)=" << sizeof(int *) << endl;//sizeof(int *);
	cout << "sizeof(int*)=" << sizeof(float *) << endl;//sizeof(int *);
	cout << "sizeof(int*)=" << sizeof(double *) << endl;//sizeof(int *);
	cout << "sizeof(int*)=" << sizeof(char *) << endl;//sizeof(int *);
	//在32位操作系统下，指针是4个字节空间大小，不管是什么数据类型
	//在64位操作系统下，指针是8个字节空间大小
	system("pause");

	return 0;
	//在32位操作系统下，占4个字节。64位下占8个字节
}