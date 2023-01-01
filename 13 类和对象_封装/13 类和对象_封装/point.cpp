#include "point.h"
//设置x
//声明这是Point作用域下的成员函数
void Point::setX(int x) {

	m_X = x;
}
//获取x
int Point::getX() {

	return m_X;
}
//设置y
void Point::setY(int y) {

	m_Y = y;
}
//获取y
int Point::getY() {

	return m_Y;
}
//shift tap 整体缩进