#include<iostream>
using namespace std;
//�������ص�ע������

//1.������Ϊ���ص�����
void func(int& a) { //int &a=10;�����Ϸ� ����Ҫôջ��Ҫô���� �������ǳ���
	cout << "func(int &a)����" << endl;

}
void func(const int& a) {
	cout << "func(const int &a)����" << endl;

}

//2.������������Ĭ�ϲ���
void func2(int a,int b=10) {

	cout << "func2(int a,int b=10)�ĵ���" << endl;
}
void func2(int a) {

	cout << "func2(int a)�ĵ���" << endl;
}

int main() {
	int a = 10;
	//func(a);//a�Ǳ������ɶ���д ����const ����ֻ��״̬ 

	func(10);//�Ϸ�����

	func2(10, 10);//�ֿ����ˣ�û���˶�����
	//func2(10);//Ҳ�ǲ����Եģ���Ϊ������� ���¶��ǿ��Ե��õġ��������ֶ���
	//ֻ�ܾ�������������ֲ���

	system("pause");

	return 0;
}