#include<iostream>
using namespace std;

int main5() {
	int a = 10;
	int b = 10;
	//1.const 修饰指针 常量指针
	const int* p = &a;
	//指针的指向可以修改，但指针的值不可以改
	// *p=20错误 
	p = &b;
	 
	//2.const修饰常量 指针常量
	int* const p2 = &a;//指针常量 特点：指针的指向不可以改，指针指向的值可以改
	*p2 = 100;
	//p2 = &b;
	//*p = 20;正确 p=&b错误，不可修改指向
	
	//3.const修饰指针和常量
	const int* const p3 = &a;//都不可以修改了

	system("pause");

	return 0;
}