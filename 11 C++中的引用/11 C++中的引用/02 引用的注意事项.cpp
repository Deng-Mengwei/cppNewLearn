#include<iostream>
using namespace std;

int main2() {
	//int& b;���󣬲�����û�е���a��������
	int a = 10;

	// 1.���ñ����ʼ��

	//int& b;//�������
	int& b = a;
	//2.���ó�ʼ����Ͳ����Ը�����
	int c = 20;

	b = c;//��ֵ�����������Ǹ�������

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	
	system("pause");

	return 0;
}