#include<iostream>
using namespace std;

int main17() {

	//continue
	for (int i = 0; i <= 100; i++) {
		//如果奇数输出，偶数不输出，偶数都被过滤掉了

		if (i % 2== 0) {

			continue;//可以筛选条件，执行到此就不再向下执行，执行下一次的循环
			//break会退出循环，continue不会

		}//0 2 4 6 8 10

		cout << i << endl;
	}

	system("pause");

	return 0;

}