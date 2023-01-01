#include<iostream>
using namespace std;

int main7(){
	//switch语句
	//给电影打分
	//10~9经典
	//8~7非常好
	//6~5一般
	//5以下烂片

	//1.提示用户给电影评分
	cout << "请给电影打分：" << endl;

	//2.用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数是：" << score << endl;

	//3.根据用户输入的分数提示用户最后的结果
	switch (score) {//整型或字符型
	
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前的分支

	case 9:
		cout << "您认为是经典电影" << endl;
		break;

	case 8:
		cout << "您认为电影非常好" << endl;
		break;

	case 7:
		cout << "您认为电影非常好" << endl;
		break;

	case 6:
		cout << "您认为电影一般" << endl;
		break;

	case 5:
		cout << "您认为电影一般" << endl;
		break;

	default:
		cout << "烂片" << endl;
		break;
	}

	//if和switch区别？
	//switch缺点，判断的时候只能是整型或字符型，不可是一个区间
	//switch优点，结构清晰，执行效率高
	system("pause");

	return 0;
}