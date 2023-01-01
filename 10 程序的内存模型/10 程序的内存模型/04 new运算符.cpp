#include<iostream>
using namespace std;

//new基本语法
//删除delete

//1.new基本语法
int* func() {
	//在堆区创建整型数据
	//new返回的是，该数据类型的指针
	int* p = new int(10);//一个变量，这个变量是10
	return p;

}

void test01() {

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	delete p;
	cout << *p << endl;//报错，这块内存已经被释放，再次访问是非法操作，会报错

}
//2.在堆区利用new开辟函数
void test02() {

	//创建10整型数据的数组，在堆区
	int* arr = new int[10];//10代表数组有10个元素

	for (int i = 0; i < 10; i++) {
	
		arr[i] = i + 100;//给10个元素赋值100~109
	
	}
	for (int i = 0; i < 10; i++) {

		cout << arr[i] << " ";

	}
	cout << endl;
	//释放堆区数组
	//释放数组的时候，要加[]才可以
	delete[] arr;
}



int main() {

	//堆区的数据由程序员管理开辟，程序员管理释放
	//如果像释放堆区的数据，利用关键字 delete

	//test01();
	test02();

	system("pause");

	return 0;
}