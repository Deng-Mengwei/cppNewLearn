#include<iostream>
#include<string>
using namespace std;

int main() {
	//1.������ά����
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "����","����","����" };

	//2.ͳ��ÿ���˵��ܺͷ���
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << scores[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//int sum[3];
	//for (int i = 0; i < 3; i++) {
	//	int num1 = scores[i][0] + scores[i][1] + scores[i][2];
	//	sum[i] = num1;
	//
	//}

	//for (int i = 0; i < 3; i++) {
	//	cout << sum[i] << " ";
	//}
	//cout << endl;
	for (int i = 0; i < 3; i++) {
		int sum = 0;//ͳ�Ʒ����ܺͱ���
		for (int j = 0; j < 3; j++) {

			sum += scores[i][j];

		}
		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
	}

	system("pause");

	return 0;
}