#include<iostream>
using namespace std;

int main4() {
	//1.创建数组
	int arr[] = {1,3,2,5,4};

	for (int i = 0; i < 5; i++) {

		cout << arr[i] << endl;

	}
	//2.实现逆置
	//2.1记录其实下标位置
	//2.2记录结束下标位置
	//2.3起始下标与结束下标的元素互换
	//2.4起始位置++结束位置--
	//2.5循环执行2.1操作 ，直到起始位置>=结束位置
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//末尾元素的下标

	

	while (start < end) {

		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;
	
	}

	//3.打印数组逆置后的结果
	for (int i = 0; i < 5; i++) {

		cout << arr[i] << endl;

	}
	system("pause");

	return 0;

}