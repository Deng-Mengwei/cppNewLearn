#include<iostream>
using namespace std;
//1.��Ҫ���ؾֲ�����������
int& test01() {

	int a = 10;//�ֲ���������������е�ջ��
	return a;

}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02() {

	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ����ݣ��ڳ����������ϵͳ�ͷ�
	return a;

}

int main4() {
	//�����������ķ���ֵ
	//int& ref = test01();

	//cout << "ref=" << ref << endl;//�Ƿ�����������

	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	test02() = 1000;//a=1000,ref2��a�ı���
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;

	system("pause");

	return 0;
}