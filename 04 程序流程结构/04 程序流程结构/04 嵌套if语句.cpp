#include<iostream>
using namespace std;

int main4() {
	//1.��ʾ����һ���߿�����

	int score = 0;
	cout << "������һ���߿����Է�����" << endl;
	cin >> score;
	//2.��ʾ�߿�����
	cout << "���ĸ߿������ǣ�" << score << endl;
	//3.�ж�
	//�������600 һ��
		// ����700����
		//����650�廪
		// �����˴�
	//�������500 ����
	//�������400 ����
	if (score > 600) {
	
		cout << "����һ��" << endl;

		if (score > 700) {
		
			cout << "���ϱ���" << endl;
		}
		else if(score > 650) {
		
			cout << "�����廪" << endl;
		}
		else {
		
			cout << "�����˴�" << endl;
		}
	}
	else if (score > 500) {
	
		cout << "���϶���" << endl;

	}
	else if (score > 400) {
	
		cout << "��������" << endl;

	}
	else {
	
		cout << "û���ϴ�ѧ" << endl;

	}
	system("pause");

	return 0;
}