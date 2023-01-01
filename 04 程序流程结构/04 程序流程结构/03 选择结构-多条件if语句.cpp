#include<iostream>
using namespace std;

int main3() {

	//选择结构中的多条件if语句
	//输入一个考试分数，如果大于600分，视为考上一本大学，在屏幕输出
	//大于500分，视为考上二本大小，屏幕输出
	//大于400分，视为考上三本大学，屏幕输出
	//小于等于400分，视为未考上本科，屏幕上输出

	//1.用户输入分数
	int score = 0;
	cout << "请输入考试分数：" << score << endl;
	cin >> score;
	//2.提示用户输入的分数

	//3.判断
	//如果大于600，考上一本
	//如果大于500，考上二本
	if (score > 600) {
		cout << "恭喜您考上一本大学！" << endl;
	}
	else if (score > 500) {
	
		cout << "恭喜您考上二本大学！" << endl;
	}
	else if (score > 400) {
	
		cout << "恭喜您考上三本大学！" << endl;
	}
	else {
	
		cout << "没考到大学" << endl;
	}
	system("pause");

	return 0;
}