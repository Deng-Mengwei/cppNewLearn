#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ
//��������д��Σ����Ƕ���ֻ����һ�Ρ�����������Ĳ���ֻ�ܳ���һ�Ρ�

//��ǰ���߱����������Ĵ��ڣ��������ú�����������֮����԰Ѻ����ŵ�����ĵط�
int max(int a, int b);
//����


int max(int a, int b) {

	return a > b ? a: b;

}
//int max(int a, int b) {
//
//	return a > b ? a : b;
//
//}

int main5() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;

}