#include<iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap01(int a, int b) {

	int temp = a;
	a = b;
	b = temp;
	cout << "�β� a=" << a << endl;
	cout << "�β� b=" << b << endl;
}

void swap02(int *p1, int *p2) {

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << "�β� *p1=" << *p1 << endl;
	cout << "�β� *p2=" << *p2 << endl;
}
int main7() {

	//ָ��ͺ���

	//1.ֵ����
	//�����Ըı�ʵ��
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//2.��ַ����
	//����ǵ�ַ���ݣ���������ʵ��
	swap02(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;

}
