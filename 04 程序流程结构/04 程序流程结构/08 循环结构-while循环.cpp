#include<iostream>
using namespace std;

int main8() {
	//while循环
	//在屏幕中打印0~9这10个数字
	//int num = 0;
	//cout << num << endl;

	//num++;
	//cout << num << endl;

	int num = 0;

	//while()填入循环条件
	//注意事项，在写循环的时候，一定要避免死循环的出现
	while (num < 10) {

		cout << num << endl;
		num++;
	
	}
	system("pause");

	return 0;
}