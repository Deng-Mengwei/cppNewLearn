//#include<iostream>
//using namespace std;
////对象的初始化和清理
////构造函数 类名(){} 初始化
////析构函数 ~类名(){} 清理
//class Person {
//
//	//1.构造函数
//	//没有返回值，不用写void
//	//函数名与类的名字相同
//	//构造函数可以有参数，可以发生重载
//	//创建对象的时候，构造函数会自动调用，而且只调用一次
//public:
//	Person() {
//	
//		cout << "Person构造函数的调用" << endl;
//	}
//
//	//2.析构函数，进行清理操作
//	//没有返回值 不写void
//	//函数名和类名相同 在名称前加~
//	//析构函数不可以有参数，不可以发生重载
//	//对象在销毁前会自动调用析构函数，而却只会调用一次
//	~Person() {
//	
//		cout << "Person的析构函数调用" << endl;
//	}
//};
//
//
////构造和析构都是必须有的实现，如果我们自己不提供，编译器会提高一个空实现和析构
//
//
//
//
//void test01() {
//
//	Person p;//在栈上的变量 test01执行完毕后，就会释放这个对象 在释放之前就会自动调用一次析构函数
//}
//
//int main01() {
//
//	//test01();
//
//	Person p;//对象不会直接释放，main执行完了瞬间就会执行析构函数
//
//	system("pause");
//
//	return 0;
//}