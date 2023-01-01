
/*
* ========代码运行前
1.代码区
存放函数体的二进制代码，操作系统管理
2.全局区
存放全局变量和静态变量及常量
* ========代码运行后
3.栈区
由编译器自动分配释放，存放的参数值，局部变量等
局部变量，形参
4.堆区
由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
指针对应的值
指针本身还是保存在了栈区
*/

/*
* 程序运行前的区
代码区：
存放CPU执行的机器指令
代码区是共享的，共享的目的是对于频繁被执行，只需要在内存里有一份代码既可
代码区是只读的，使其只读的原因是放置程序意外地修改了它的指令

全区域：
全集变量，静态变量，常量
还包含了常量区字符串常量和其他常量也存放于此
该区域的数据在程序结束后执行释放
*/
#include<iostream>
using namespace std;

//创建全局变量
//放在全局区的
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main1() {

	//创建普通局部变量(没写到全局区)，没写到函数内部的才是全局变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

	//两者之间存放是有距离的

	//放在全局区的
	//静态变量，在普通变量前面加static,属于静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;

	//const修饰的变量
	//const修饰的全局变量

	//const修饰局部变量
	//const修饰的全局变量，const修饰的局部变量
	cout << "全局常量 c_g_a的地址为：" << (int)&c_g_a << endl;
	cout << "全局常量 c_g_b的地址为：" << (int)&c_g_b << endl;


	//也是不放在全局区
	//const修饰局部变量
	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "局部常量 c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "局部常量 c_l_b的地址为：" << (int)&c_l_b << endl;

	system("pause");

	return 0;
}