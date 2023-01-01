#include<iostream>
using namespace std;

int main12() {

	//for循环
	//从数字0 打印到数字9

	for (int i = 0; i < 10; i++) {
	
		cout << i << endl;
	}
	//下面的也可以
	int i = 0;
	for (;;) {
		if (i < 10) {
			cout << i << endl;
		}
		i++;
	}
	system("pause");

	return 0;

}