#include<iostream>
using namespace std;
//C++ ��new�ڶ��������ڴ�

int* func03(){
	//����new�ؼ��֣����Խ����ݿ��ٵ�����
	//ָ�룬����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ����˶���
	int* p = new int(10);//����new��ַ���

	return p;

}


int main3() {
	//�ڶ�����������
	int* p = func03();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;


	system("pause");

	return 0;
}