#include<iostream>
using namespace std;

int main7(){
	//switch���
	//����Ӱ���
	//10~9����
	//8~7�ǳ���
	//6~5һ��
	//5������Ƭ

	//1.��ʾ�û�����Ӱ����
	cout << "�����Ӱ��֣�" << endl;

	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ����ǣ�" << score << endl;

	//3.�����û�����ķ�����ʾ�û����Ľ��
	switch (score) {//���ͻ��ַ���
	
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ�ķ�֧

	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;

	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;

	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;

	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;

	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;

	default:
		cout << "��Ƭ" << endl;
		break;
	}

	//if��switch����
	//switchȱ�㣬�жϵ�ʱ��ֻ�������ͻ��ַ��ͣ�������һ������
	//switch�ŵ㣬�ṹ������ִ��Ч�ʸ�
	system("pause");

	return 0;
}