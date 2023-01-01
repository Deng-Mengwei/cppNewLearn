#include<iostream>
using namespace std;
//goto 纯大写的标记名字（约定俗成）
//goto 太多了影响阅读，最好少写
int main18() {

	//goto语句
	cout << "1.XXXXX" << endl;

	cout << "2.XXXXX" << endl;

	goto FLAG;

	cout << "3.XXXXX" << endl;

	cout << "4.XXXXX" << endl;

FLAG:

	cout << "5.XXXXX" << endl;

	system("pause");

	return 0;
}