#include<iostream>
using namespace std;

//静态成员变量
class Person {

public:
	//静态成员变量
	//1 所有对象都共享同一份数据
	//2 编译阶段就分配了内存
	//3 类内声明 类外初始化操作
	static int m_A;

	//静态成员函数
	//1 所有对象共享一个函数
	//2 静态成员函数只能访问静态成员变量
	static void func() {
	
		m_A = 100;//静态成员函数可以访问 静态的成员变量
		//m_C = 200;//静态成员函数不可以访问非静态成员变量 会报错！！！ 无法区分到底是哪个对象的属性
		cout << "static void func 调用" << endl;
	}


	int m_C;//非静态成员变量

	//静态成员变量是有访问权限的
	//静态成员函数是有访问权限的

private:
	static int m_B;
	static void func2() {
	
		cout << "static void func2调用" << endl;
	}
};
int Person::m_A = 100;
int Person::m_B = 200;
void test01() {

	Person p;

	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;

	cout << p.m_A << endl;
	//cout << p.m_B << endl; //这里的数据是不可以访问的
}
void test02() {
	//静态成员变量 不属于某个对象上，所有对象共享同一份数据
	//因此静态成员变量有两种访问方式

	//1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;


	//2.通过类名访问
	cout << Person::m_A << endl;
}

//有两种访问方式
void test03() {
	//1.通过对象访问
	Person p;
	p.func();

	//2.通过类名访问
	Person::func();

	//Person::func2(); 这是不可以访问的，属于私有域，类外访问不到私有静态成员函数
}
int main() {
	//test01();

	//test02();

	test03();

	system("Pause");

	return 0;
}