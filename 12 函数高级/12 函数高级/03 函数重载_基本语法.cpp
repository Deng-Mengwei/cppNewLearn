#include<iostream>
using namespace std;
//������������ͬ����߸�����
//1.ͬһ���������� 
//2.����������ͬ
//3.�����������Ͳ�ͬ,���߸�����ͬ������˳��ͬ


//1.����ȫ����������
void func() {

	cout << "func�ĵ���" << endl;
}
void func(int a) {

	cout << "func int a�ĵ���!" << endl;
}
void func(double a) {

	cout << "func double a�ĵ���!" << endl;
}
void func(int a, double b) {

	cout << "func int a, double b�ĵ���!" << endl;
}
void func(double a, int b) {

	cout << "func double a, int b�ĵ���!" << endl;
}
//ע������
//�����ķ���ֵ��������Ϊ�������ص����� ���õ�ʱ�� ��������壬���ǲ����Ե�
//void func() {
//
//	cout << "func�ĵ���" << endl;
//}
//int func() {
//
//	cout << "func�ĵ���" << endl;
//}

int main3() {

	func();

	func(10);

	func(3.14);

	func(10, 3.14);

	func(3.14, 10);

	system("pause");

	return 0;

}