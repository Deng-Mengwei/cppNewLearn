//#include<iostream>
//using namespace std;
////深拷贝与浅拷贝问题
//
//class Person {
//public:
//	Person() {
//		cout << "Person的默认函数调用" << endl;
//	}
//	Person(int age,int height) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person的有参函数调用" << endl;
//	}
//	//自己实现拷贝构造函数 解决浅拷贝的问题
//	Person(const Person& p) {
//		cout << "Person 拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;这是编译器默认写的代码 浅拷贝
//
//		m_Height = new int(*p.m_Height);
//	
//	}
//
//	~Person() {
//
//		//析构代码 将堆区开辟的数据做释放作用
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		
//		}
//			cout << "Person的析构函数调用" << endl; 
//	}
//
//	int m_Age;//年龄
//	int* m_Height;//身高
//};
//
//void test01() {
//
//	Person p1(18,160);
//
//	cout << "p1的年龄为：" << p1.m_Age << endl << "身高为：" << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2的年龄为：" << p2.m_Age << endl << "身高为：" << *p2.m_Height << endl;//编译器做了浅拷贝
//}
////栈 先进后出，p2先被释放
////堆 先进先出
//
////p1 p2作为变量属于 栈区 但是内部的数据是储存在堆区的
////所以p2先出去
//
////浅拷贝带来问题，堆区内存重复释放
////浅拷贝的问题用深拷贝解决
//
///*如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题*/
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}