#include<iostream>
using namespace std;

int main13() {
	//敲桌子的案例
	//1.先来输出1-100这些数字
	for (int i = 1; i <= 100; i++) {
		//2.从这100个数字中找到特殊的数字，改为“敲桌子”

		//特殊的数字

		//7的倍数(7,14,21,28...) %7 = 0
		//个位有7(7,17,27,37...) % 10 = 7
		//十位有7(70,71,72,73...) /10 = 7
		if (i % 7 == 0) {
			cout << "敲桌子" << endl;
		}
		else if (i % 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else if (i / 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");

	return 0;

}