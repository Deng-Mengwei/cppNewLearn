#include<iostream>
#include<ctime>
//time系统时间头文件包含
using namespace std;
//1.系统生成随机数
//2.玩家进行猜测
//3.判断玩家的猜测

//猜对 退出游戏
//猜错 提示猜的结果 过大或过小 重新返回第2步
int main9() {

	//添加随机数种子，利用系统当前的时间生成随机数，防止每次生成的随机数都一样
	// 
	srand((unsigned int)time(NULL));
	//1.系统生成随机数
	int num = rand() % 100 + 1;///rand()%100+1生成 0+1~99+!随机数
	//cout << num << endl;

	//2.玩家进行猜测
	int val = 0;
	cout << "猜个数字" << endl;
	while (1) {
		cin >> val;

		//3.判断玩家的猜测

		if (val > num) {

			cout << "猜测过大" << endl;

		}
		else if (val < num) {

			cout << "猜测过小" << endl;
		}
		else {
		
			cout << "猜对了" << endl;
			break;//break在循环中，可以利用关键字来退出循环
		}
	}

	system("pause");

	return 0;

}