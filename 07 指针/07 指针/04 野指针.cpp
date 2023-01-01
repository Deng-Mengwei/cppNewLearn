#include<iostream>
using namespace std;

int main4() {

	//野指针
	//在程学中，尽量避免野指针
	int* p = (int *)0x1100;//直接指向非法空间
	cout << *p << endl;

	system("pause");

	//空指针和野指针都不是我们申请的都不要取访问
	return 0;

}