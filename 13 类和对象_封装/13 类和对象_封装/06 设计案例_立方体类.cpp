#include<iostream>
using namespace std;
/*
1.创建立方体类
2.设计属性
*/
class Cube {

public:
	//行为
	//行为获取立方体面积
	int calculateS() {
	
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	
	}
	//获取立方体体积
	int calculateV() {

		return m_L * m_W * m_H ;

	}

	//利用成员函数判断，两个立方体是否相等
	bool isSameByClass(Cube &c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			
			return true;

		}
		return false;
	}
	//设置获取长宽高
	//长
	void setL(int l) {
	
		m_L = l;
	}
	int getL() {
	
		return m_L;
	}

	//宽
	void setW(int w) {

		m_W = w;
	}
	int getW() {

		return m_W;
	}

	//高
	void setH(int h) {

		m_H = h;
	}
	int getH() {

		return m_H;
	}
private:
	//属性
	int m_L;//长
	int m_W;//宽
	int m_H;//高
};
//利用全局函数判断，两个立方体是否相等
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
	cout << "c1的面积为：" << c1.calculateS() << endl;
	//1000
	cout << "c1的体积为：" << c1.calculateV() << endl;


	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret1 = isSame(c1, c2);
	if (ret1) {
	
		cout << "c1和c2是相等的" << endl;
	}
	else {
	
		cout << "c1和c2是不相等的" << endl;
	}

	bool ret2 = c1.isSameByClass(c2);
	if (ret2) {

		cout << "c1和c2是相等的" << endl;
	}
	else {

		cout << "c1和c2是不相等的" << endl;
	}

	system("pause");

	return 0;
}