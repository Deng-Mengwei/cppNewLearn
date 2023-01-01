//C++面想对象的三大特征为：封装，继承，多态
//万事万物结尾对象，对象上有属性和行为
//具有同性质的对象，抽象成为类 人属于人类 车属于车类
#include<iostream>
using namespace std;

const double PI = 3.14;
 //设计一个圆类，求圆的周长
//圆求周长的公式，2*PI*r

//class 代表设计一个类，类后面紧跟这的是类的名称
class Circle {
	//访问权限
	//公共权限
public:

	//属性 变量
	//半径
	int m_r;

	//行为 函数
	//获取圆周长
	double calcualteZC() {
	
		return 2 * PI * m_r;
	}


};

int main1() {

	//通过圆类 创建具体对象
	//实例话一个对象
	Circle c1;

	c1.m_r = 10;

	cout << "圆的周长为：" << c1.calcualteZC() << endl;

	system("pause");

	return 0;
}