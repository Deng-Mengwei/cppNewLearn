#include<iostream>
using namespace std;

int main5() {
	//��ֻС������أ��ж���ֻ����
	// 
	//1.������ֻС������ر���

	int A = 0;
	int B = 0;
	int C = 0;

	//2.���û�������ֻС�������
	cout << "������A��������" << endl;
	cin >> A;
	cout << "������B��������" << endl;
	cin >> B;
	cout << "������C��������" << endl;
	cin >> C;

	cout << "A��������" << A << endl;
	cout << "B��������" << B << endl;
	cout << "C��������" << C << endl;
	//3.�ж���ֻС������
	if (A > B) {//A��B��

		if (A > C){//A��C��
		
			cout << "С��A����" << endl;
		}
		else {
		
			cout << "С��C����" << endl;
		}

	}
	else {//B��A��
	
		if (B > C) {//B��C��

			cout << "С��B����" << endl;
		
		}
		else {
		
			cout << "С��C����" << endl;
		}
	}

	system("pause");

	return 0;
}