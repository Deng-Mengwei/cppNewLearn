//C++����������������Ϊ����װ���̳У���̬
//���������β���󣬶����������Ժ���Ϊ
//����ͬ���ʵĶ��󣬳����Ϊ�� ���������� �����ڳ���
#include<iostream>
using namespace std;

const double PI = 3.14;
 //���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2*PI*r

//class �������һ���࣬��������������������
class Circle {
	//����Ȩ��
	//����Ȩ��
public:

	//���� ����
	//�뾶
	int m_r;

	//��Ϊ ����
	//��ȡԲ�ܳ�
	double calcualteZC() {
	
		return 2 * PI * m_r;
	}


};

int main1() {

	//ͨ��Բ�� �����������
	//ʵ����һ������
	Circle c1;

	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.calcualteZC() << endl;

	system("pause");

	return 0;
}