#include<iostream>
using namespace std;

int main3() {
	//1.������ float 7
	//2.˫���� double 15 or 16
	//Ĭ������£����һ��С��������ʾ��6λ��Ч����
	float f1 = 3.14f;//���ӵĻ���Ĭ��Ϊdouble,��ת��Ϊfloat

	cout << "f1=" << f1 << endl;

	double d1 = 3.14;

	cout << "d1=" << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;//4

	cout << "doubleռ�õ��ڴ�ռ�Ϊ��" << sizeof(double) << endl;//8

	//��ѧ������
	float f2 = 3e2;//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;

	system("pause");


	return 0;
}