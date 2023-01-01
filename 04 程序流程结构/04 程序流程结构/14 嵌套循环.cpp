#include<iostream>
using namespace std;

int main14() {
	//利用嵌套循环来实现星图
	//打印一行星星

	//外层执行一次，内层执行一周
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {

			cout << "* ";
			//cout<< i << endl;//一般都是就近原则，如果上面的也是i，输出的还是内层的i
		}
		cout << endl;
	}

	system("pause");

	return 0;
}