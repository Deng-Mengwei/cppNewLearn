#pragma once
#include<iostream>
#include "point.h"
using namespace std;

class Circle {
private:
	int m_R;//�뾶

	Point m_Center;//Բ��
public:
	//���ð뾶
	void setR(int r);
	//��ȡ�뾶
	int getR();
	//����Բ��
	void setCenter(Point center);
	//��ȡԲ��
	//�����п�������һ���� ��Ϊ�����еĳ�Ա
	Point getCenter();
};