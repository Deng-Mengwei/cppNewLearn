#include<iostream>
using namespace std;
/*
1.������������
2.�������
*/
class Cube {

public:
	//��Ϊ
	//��Ϊ��ȡ���������
	int calculateS() {
	
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	
	}
	//��ȡ���������
	int calculateV() {

		return m_L * m_W * m_H ;

	}

	//���ó�Ա�����жϣ������������Ƿ����
	bool isSameByClass(Cube &c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			
			return true;

		}
		return false;
	}
	//���û�ȡ�����
	//��
	void setL(int l) {
	
		m_L = l;
	}
	int getL() {
	
		return m_L;
	}

	//��
	void setW(int w) {

		m_W = w;
	}
	int getW() {

		return m_W;
	}

	//��
	void setH(int h) {

		m_H = h;
	}
	int getH() {

		return m_H;
	}
private:
	//����
	int m_L;//��
	int m_W;//��
	int m_H;//��
};
//����ȫ�ֺ����жϣ������������Ƿ����
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;

	}
	return false;
}
int main6() {
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	//600
	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
	//1000
	cout << "c1�����Ϊ��" << c1.calculateV() << endl;


	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret1 = isSame(c1, c2);
	if (ret1) {
	
		cout << "c1��c2����ȵ�" << endl;
	}
	else {
	
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	bool ret2 = c1.isSameByClass(c2);
	if (ret2) {

		cout << "c1��c2����ȵ�" << endl;
	}
	else {

		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	system("pause");

	return 0;
}