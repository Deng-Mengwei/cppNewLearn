#include<iostream>
#include "circle.h"
#include "point.h"
using namespace std;
//���Բ��ϵ�ж�
/*
�㵽Բ�ĵľ���==�뾶 ����Բ��
�㵽Բ�ĵľ���>�뾶 ����Բ��
�㵽Բ�ĵľ���<�뾶 ����Բ��

�㵽Բ�ĵľ��룿����

*/
//�����ֵ�ͷ�ļ���
//����
//class Point {
//private:
//	int m_X;
//	int m_Y;
//
//public:
//	//����x
//	void setX(int x) {
//	
//		m_X = x;
//	}
//	//��ȡx
//	int getX() {
//
//		return m_X;
//	}
//	//����y
//	void setY(int y) {
//
//		m_Y = y;
//	}
//	//��ȡy
//	int getY() {
//
//		return m_Y;
//	}
//};

//Բ��

//class Circle {
//private:
//	int m_R;//�뾶
//
//	Point m_Center;//Բ��
//public:
//	//���ð뾶
//	void setR(int r) {
//	
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR() {
//	
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center) {
//	
//		m_Center = center;
//	}
//	//��ȡԲ��
//
//	//�����п�������һ���� ��Ϊ�����еĳ�Ա
//	Point getCenter() {
//		return m_Center;
//	
//	}
//
//};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p) {

	//��������֮�����ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance == rDistance) {
	
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance) {
	
		cout << "����Բ�� " << endl;
	}
	else if (distance < rDistance) {

		cout << "����Բ�� " << endl;
	}
}

int main() {
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);

	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ

	isInCircle(c, p);

	system("pause");

	return 0;
}
