#include<iostream>
using namespace std;

int main1() {

	//ѡ��ṹ ����if���
	//�û���������������������600����Ϊ����һ����ѧ������Ļ�����

	//1.�û��������
	int score = 0;
	cout << "������һ������:" << endl;
	cin >> score;

	//2.��ӡ�û�����ķ���
	cout << "������ķ���Ϊ��" << score << endl;
	//3.�жϷ����Ƿ����600��������ڣ���ô���
	//if (score > 100);		//if���������治���Լӷֺ�
	if (score > 100) {

		cout << "��ϲ��������һ����ѧ" << endl;

	}
	system("pause");

	return 0;

}