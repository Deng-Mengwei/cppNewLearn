#include<iostream>
using namespace std;

int main4() {
	//1.提示输入一个高考分数

	int score = 0;
	cout << "请输入一个高考考试分数：" << endl;
	cin >> score;
	//2.显示高考分数
	cout << "您的高考分数是：" << score << endl;
	//3.判断
	//如果大于600 一本
		// 大于700北大
		//大于650清华
		// 其余人大
	//如果大于500 二本
	//如果大于400 三本
	if (score > 600) {
	
		cout << "考上一本" << endl;

		if (score > 700) {
		
			cout << "考上北大" << endl;
		}
		else if(score > 650) {
		
			cout << "考上清华" << endl;
		}
		else {
		
			cout << "考上人大" << endl;
		}
	}
	else if (score > 500) {
	
		cout << "考上二本" << endl;

	}
	else if (score > 400) {
	
		cout << "考上三本" << endl;

	}
	else {
	
		cout << "没考上大学" << endl;

	}
	system("pause");

	return 0;
}