#include<iostream>
using namespace std;

int main1() {

	//���û����﷨
	//�������� &����=ԭ��

	int a = 10;

	int& b = a;

	cout << a << endl;//Ҳ����20����Ϊָ���Ƕ�ͬһ���ڴ�
	cout << b << endl;//Ҳ����20����Ϊָ���Ƕ�ͬһ���ڴ�

	b = 20;

	cout << a << endl;//Ҳ����20����Ϊָ���Ƕ�ͬһ���ڴ�
	cout << b << endl;//Ҳ����20����Ϊָ���Ƕ�ͬһ���ڴ�

	system("pause");

	return 0;

}