#include<iostream>
using namespace std;

int main4() {
	//1. �ַ��ͱ����Ĵ�����ʽ
	char ch = 'A';
	cout << ch << endl;

	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "�ַ��ͱ�����ռ�ڴ�ռ䣺" << sizeof(char) << endl;

	//3.�ַ��ͱ�����������
	//char ch2 = "b";//�����ַ��ͱ�����ʱ��Ҫ�õ�����
	// char ch3 = 'asieejwfn';//�����ַ��ͱ�����ʱ�򣬵�������ֻ����һ���ַ�

	//4.�ַ��ͱ�������ascii��
	cout << (int)ch << endl;//�ַ���ǿ��ת��Ϊ���� a-97 A-65
	system("pause");

	return 0;
}