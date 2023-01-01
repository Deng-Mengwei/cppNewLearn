#include<iostream>
using namespace std;

int main3() {

	int arr[] = {300,550,200,400,250};
	int max_v = 0;

	for (int i = 0; i < 5; i++) {
	
		//如果访问的数值中的元素比我认定的最大值还要大，更新最大值
		if (arr[i] >= max_v) {
		
			max_v = arr[i];
		}
	}
	cout << "五只小猪里面体重最大的是：" << max_v << endl;
	
	system("pause");

	return 0;
}