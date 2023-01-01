#include<iostream>
using namespace std;

int main5() {
	//转义字符
	//换行符\n
	cout << "hello world\n";

	//反斜杠 \\  
	cout << "\\" << endl;//只输出一个\
	//水平制表符\t 8个空间 整齐的输出字符
	cout << "aaa\thello world" << endl;
	cout << "aaa\thello world" << endl;
	cout << "aaaaaa\thello world" << endl;
	system("pause");

	return 0;
}