#pragma once
#include<iostream>
#include "point.h"
using namespace std;

class Circle {
private:
	int m_R;//半径

	Point m_Center;//圆心
public:
	//设置半径
	void setR(int r);
	//获取半径
	int getR();
	//设置圆心
	void setCenter(Point center);
	//获取圆心
	//在类中可以让另一个类 作为本来中的成员
	Point getCenter();
};