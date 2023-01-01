#include<iostream>
using namespace std;

int main5() {
	//三只小猪称体重，判断哪只最重
	// 
	//1.创建三只小猪的体重变量

	int A = 0;
	int B = 0;
	int C = 0;

	//2.让用户输入三只小猪的重量
	cout << "请输入A的重量：" << endl;
	cin >> A;
	cout << "请输入B的重量：" << endl;
	cin >> B;
	cout << "请输入C的重量：" << endl;
	cin >> C;

	cout << "A的重量：" << A << endl;
	cout << "B的重量：" << B << endl;
	cout << "C的重量：" << C << endl;
	//3.判断那只小猪最重
	if (A > B) {//A比B重

		if (A > C){//A比C重
		
			cout << "小猪A最重" << endl;
		}
		else {
		
			cout << "小猪C最重" << endl;
		}

	}
	else {//B比A重
	
		if (B > C) {//B比C重

			cout << "小猪B最重" << endl;
		
		}
		else {
		
			cout << "小猪C最重" << endl;
		}
	}

	system("pause");

	return 0;
}