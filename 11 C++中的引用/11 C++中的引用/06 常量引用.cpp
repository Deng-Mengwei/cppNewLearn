#include<iostream>
using namespace std;
//���������βΣ���ֹ�����

void showValue(const int &val) {
	//�����в�Ҫ�޸��βΣ���

	//val = 1000;//����const �ͻᱨ��

	cout << "val=" << val << endl;

}

int main6() {
	//int a = 10;
	//int& ref = a;//int& ref = 10;�������ñ�����һ��Ϸ����ڴ�ռ�

	//����const֮�󣬱������������޸� int temp=10; const int &ref=temp;
	//const int& ref = 10;

	//ref = 20;//����const֮���Ϊֻ���������޸�

	int a = 100;

	showValue(a);

	cout << "a=" << a << endl;
	system("pause");

	return 0;
}