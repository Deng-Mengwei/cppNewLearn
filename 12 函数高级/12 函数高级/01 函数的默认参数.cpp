#include<iostream>
using namespace std;
//������Ĭ�ϲ���
int func(int a, int b = 20, int c = 30) {//b c����Ĭ��ֵ��

	return a + b + c;

}
 
//�Ҵ��ˣ������ҵ����ݣ������û���룬����Ĭ��ֵ
//�﷨:����ֵ���� ���������β�=Ĭ��ֵ��{}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴������Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 20, int c) {//b c����Ĭ��ֵ��
//
//	return a + b + c;
//
//}//c ����ֵ�Ļ����ͻᱨ��

//2.�������������Ĭ�ϲ�����������ʵ�־Ͳ�����Ĭ�ϲ�����(�����ԣ����У�)
//������ʵ��ֻ����һ��Ĭ�ϲ�������һ��������������
int func2(int a=10, int b=10);

int func2(int a, int b) {

	return a + b;
}
int main1() {

	cout << func(10) << endl;
	cout << func(30) << endl;

	cout << func2(20) << endl;

	system("pause");

	return 0;
}