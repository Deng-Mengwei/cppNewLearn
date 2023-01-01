#include<iostream>
using namespace std;

int main11() {
	//1.将所有的三位数进行输出(100~999)
	int num = 100;

	do {
		//2.在所有的三位数中找到水仙花数
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;//个位
		b = num / 10 % 10;//十位
		c = num / 100;//百位

		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}//如果是水仙花数，打印
		num++;
	} while (num < 1000);
	

	//水仙花数

	//获取个位 153%10=3 对数字取模于10 可以获取个位
	//获取十位 153/10=15 15%10=5
	//获取百位 153/100=1 直接整除于100，获取百位

	//判断 个位^3+十位^3+百位^3=本身
	
	system("pause");

	return 0;
}