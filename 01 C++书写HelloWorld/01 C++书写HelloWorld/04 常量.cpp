#include<iostream>
using namespace std;

//�����Ķ��巽ʽ
//1.#define �곣��
//2.const���εı���

//1.#define �곣��
#define Day 7

int main4() {
	//Day = 14; //����Day�ǳ�����һ���޸ľͻᱨ��

	cout << "һ��һ���ж����죺" << Day << "��" << endl;
	
	//2.counst���α���
	const int month = 12;
	//month = 24;//���� const���εı���Ҳ��Ϊ����

	cout << "һ���ܹ��У�" << month << "���·�" << endl;

	system("pause");

	return 0;
}