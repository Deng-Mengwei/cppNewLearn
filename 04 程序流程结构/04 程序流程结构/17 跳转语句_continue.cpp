#include<iostream>
using namespace std;

int main17() {

	//continue
	for (int i = 0; i <= 100; i++) {
		//������������ż���������ż���������˵���

		if (i % 2== 0) {

			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ�ε�ѭ��
			//break���˳�ѭ����continue����

		}//0 2 4 6 8 10

		cout << i << endl;
	}

	system("pause");

	return 0;

}