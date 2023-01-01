#include<iostream>
using namespace std;

//访问权限有三种
//1.public 公共权限 程序员在类内可以访问 类外可以访问
class Person {
public:
	string m_Name;//姓名
protected:
	string m_Car;//汽车
private:
	int m_Password;//银行卡密码

public:
	void function() {
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}

};

//2.3在继承有区别

//2.protected 保护权限 程序员类内可以访问 类外不可以访问 儿子可以访问父子中的保护权限

//3.private 私有权限 程序员内类可以访问 类外不可以访问 儿子不可以访问父亲的私有权限

int main3() {

	//实例化具体对象
	Person p1;

	p1.m_Name = "李四";

	//p1.m_Car = "奔驰";//保护权限内容，在类外访问不到
	// 

	//p1.m_Password=123;//私有权限的内容，内外 访问不到
	p1.function();

	system("pause");

	return 0;

}