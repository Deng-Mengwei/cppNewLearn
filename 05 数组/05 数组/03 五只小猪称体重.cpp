#include<iostream>
using namespace std;

int main3() {

	int arr[] = {300,550,200,400,250};
	int max_v = 0;

	for (int i = 0; i < 5; i++) {
	
		//������ʵ���ֵ�е�Ԫ�ر����϶������ֵ��Ҫ�󣬸������ֵ
		if (arr[i] >= max_v) {
		
			max_v = arr[i];
		}
	}
	cout << "��ֻС���������������ǣ�" << max_v << endl;
	
	system("pause");

	return 0;
}