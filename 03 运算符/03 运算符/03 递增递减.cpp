#include<iostream>
using namespace std;

int main3() {
	//1. ǰ�õ���
	int a = 10;
	++a;//����+1
	cout << "a=" << a << endl;

	//2.���õ���
	int b = 10;
	b++;//����+1
	cout << "b=" << b << endl;

	//3.ǰ�úͺ��õ�����
	//ǰ�õ��������ð�����+1��Ȼ����ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;//11
	cout << "b2=" << b2 << endl;//110

	//���õ������Ƚ��б��ʽ���㣬���ñ���+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3=" << a3 << endl;//11
	cout << "b3=" << b3 << endl;//100

	system("pause");

	return 0;
}