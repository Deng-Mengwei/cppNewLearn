//#include<iostream>
//using namespace std;
////1.构造函数的分类和调用
////分类
////按照参数分类 无参构造 有参构造
//class Person {
//	//构造函数
//	
//	//按照类型分类 普通构造 拷贝构造
//public:
//	//普通构造
//	//无参构造（默认构造）
//	Person() {
//	
//		cout << "Persond的构造函数调用" << endl;
//	}
//	//有参构造
//	Person(int a) {
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数 
//	//
//	Person(const Person &p) {
//		//将传入的人身上所有的属性，拷贝到我身上
//		age = p.age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	
//
//	}
//
//	~Person() {
//	
//		cout << "Person的析构函数调用" << endl; 
//	}
//
//	int age;
//};
////调用
//void test01() {
//	//1.括号法
//	//Person p1;//默认构造函数的调用
//	//Person p2(10);//有参构造调用
//	////拷贝构造函数怎么调用
//	//Person p3(p2);
//
//	//cout << "p2的年龄为：" << p2.age << endl;
//	//cout << "p3的年龄为：" << p3.age << endl;
//	
//	/*注意事项：
//	调用默认构造函数的时候，不要加()
//	*/
//	//因为下面这行代码，编译器认为是一个函数的声明
//	
//	//Person p1();//不会创建任意对象，只会当作是一个函数声明
//
//	//void func();//函数的声明
//
//	////2.显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//
//	//Person(10);//匿名对象，创建了一个变量，但没有名字 特点：当前行执行结束后，系统会立即回收掉匿名对象
//	//cout << "aaa" << endl;
//
//	/*注意事项2
//	* 不要利用拷贝函数 初始化匿名对象
//	*/
//	//Person(p3);//会有语法错误 发生重定义
//	//编译器会认为Person (p3)==Person p3; 会以为是一个对象的声明
//	//相当于创建一个对象 p3 而p3已经被创建过了
//
//	//3.隐式法
//	Person p4 = 10;//相当于写了 Person p4=Person(10); 有参构造的调用
//	Person p5 = p4;//拷贝构造
//}
//int main2() {
//
//	test01();
//	 
//	system("Pause");
//
//	return 0;
//}