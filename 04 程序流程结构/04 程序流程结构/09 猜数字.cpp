#include<iostream>
#include<ctime>
//timeϵͳʱ��ͷ�ļ�����
using namespace std;
//1.ϵͳ���������
//2.��ҽ��в²�
//3.�ж���ҵĲ²�

//�¶� �˳���Ϸ
//�´� ��ʾ�µĽ�� ������С ���·��ص�2��
int main9() {

	//�����������ӣ�����ϵͳ��ǰ��ʱ���������������ֹÿ�����ɵ��������һ��
	// 
	srand((unsigned int)time(NULL));
	//1.ϵͳ���������
	int num = rand() % 100 + 1;///rand()%100+1���� 0+1~99+!�����
	//cout << num << endl;

	//2.��ҽ��в²�
	int val = 0;
	cout << "�¸�����" << endl;
	while (1) {
		cin >> val;

		//3.�ж���ҵĲ²�

		if (val > num) {

			cout << "�²����" << endl;

		}
		else if (val < num) {

			cout << "�²��С" << endl;
		}
		else {
		
			cout << "�¶���" << endl;
			break;//break��ѭ���У��������ùؼ������˳�ѭ��
		}
	}

	system("pause");

	return 0;

}