#include<iostream>
using namespace std;

int main2() {

	//ָ����ռ���ڴ�ռ��С
	int a = 10;
	int *p;
	p = &a;

	//int *p=&a;
	cout << "sizeof(int*)=" << sizeof(int *) << endl;//sizeof(int *);
	cout << "sizeof(int*)=" << sizeof(float *) << endl;//sizeof(int *);
	cout << "sizeof(int*)=" << sizeof(double *) << endl;//sizeof(int *);
	cout << "sizeof(int*)=" << sizeof(char *) << endl;//sizeof(int *);
	//��32λ����ϵͳ�£�ָ����4���ֽڿռ��С��������ʲô��������
	//��64λ����ϵͳ�£�ָ����8���ֽڿռ��С
	system("pause");

	return 0;
	//��32λ����ϵͳ�£�ռ4���ֽڡ�64λ��ռ8���ֽ�
}