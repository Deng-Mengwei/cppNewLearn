#include<iostream>
using namespace std;
//&ȡַ�������÷�
// *ȡֵ������ָ��
//��������

//1.ֵ����
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
}

//2.��ַ����
void mySwap02(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "swap02 a=" << *a << endl;
	cout << "swap02 b=" << *b << endl;

}

//3.���ô���
//�����a�������b�޸Ļ�ͬ��
void mySwap03(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap03 a=" << a << endl;
	cout << "swap03 b=" << b << endl;

}


int main3() {
	//��������ʱ�������������õļ������β�����ʵ��

	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	mySwap03(a, b);//������ԭ��һ��Ч��
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}