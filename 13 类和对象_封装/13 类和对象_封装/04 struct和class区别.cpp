//struct��classd ȥ��
//struct Ĭ��Ȩ���ǹ��� public
//class Ĭ��Ȩ���� ˽�� private

#include<iostream>
using namespace std;

class C1 {
	int m_A;//Ĭ��Ȩ�ޣ���˽��
};

struct C2 {
	int m_A;//Ĭ��Ȩ�� �ǹ���

};

int main4() {

	//C1 c1;
	//c1.m_A = 100;//����˽�в��ɷ��ʣ�������ⲻ���Է���
	C2 c2;
	c2.m_A = 100;//��structĬ��Ȩ��Ϊ��������˿��Է���

	system("pause");

	return 0;

}