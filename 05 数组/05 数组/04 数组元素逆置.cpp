#include<iostream>
using namespace std;

int main4() {
	//1.��������
	int arr[] = {1,3,2,5,4};

	for (int i = 0; i < 5; i++) {

		cout << arr[i] << endl;

	}
	//2.ʵ������
	//2.1��¼��ʵ�±�λ��
	//2.2��¼�����±�λ��
	//2.3��ʼ�±�������±��Ԫ�ػ���
	//2.4��ʼλ��++����λ��--
	//2.5ѭ��ִ��2.1���� ��ֱ����ʼλ��>=����λ��
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//ĩβԪ�ص��±�

	

	while (start < end) {

		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;
	
	}

	//3.��ӡ�������ú�Ľ��
	for (int i = 0; i < 5; i++) {

		cout << arr[i] << endl;

	}
	system("pause");

	return 0;

}