#include<iostream>
using namespace std;
//C++ 用new在堆区开辟内存

int* func03(){
	//利用new关键字，可以将数据开辟到堆区
	//指针，本质也是局部变量，放在栈上，指针保存的数据是放在了堆区
	int* p = new int(10);//返回new地址编号

	return p;

}


int main3() {
	//在堆区开辟数据
	int* p = func03();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;


	system("pause");

	return 0;
}