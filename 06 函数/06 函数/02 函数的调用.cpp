#include<iostream>
using namespace std;

//����ӷ�����
//���������ʱ��num1��num2��û����ʵ�����ݣ���ֻ��һ����ʽ�ϵĲ�������Ϊ�β�
int add(int num1, int num2) {

	int num = num1 + num2;

	return num;

}

int main2() {
	//main�����е���add����

	int a = 10;
	int b = 10;

	//���������﷨���������ƣ�������
	//a��b��Ϊʵ�ʵĲ��������ʵ��
	int c = add(a, b);

	cout << "c=" << c << endl;

	system("pause");

	return 0;

}