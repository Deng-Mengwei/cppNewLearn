#include<iostream>
using namespace std;

int main5() {
	int a = 10;
	int b = 10;
	//1.const ����ָ�� ����ָ��
	const int* p = &a;
	//ָ���ָ������޸ģ���ָ���ֵ�����Ը�
	// *p=20���� 
	p = &b;
	 
	//2.const���γ��� ָ�볣��
	int* const p2 = &a;//ָ�볣�� �ص㣺ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*p2 = 100;
	//p2 = &b;
	//*p = 20;��ȷ p=&b���󣬲����޸�ָ��
	
	//3.const����ָ��ͳ���
	const int* const p3 = &a;//���������޸���

	system("pause");

	return 0;
}