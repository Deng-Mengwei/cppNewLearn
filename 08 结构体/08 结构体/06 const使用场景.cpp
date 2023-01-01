#include<iostream>
#include<string>
using namespace std;

//const的使用场景

struct student {
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;

};
//将函数中的形参改为指针，可以减少内存空间，而且不会赋值出新的副本出来

void printstudent(const student *p) {
	//s->age = 150;//加入const后一旦有修改的操作就会把偶哦，可以防止我误操作
	cout << "姓名：" << p->name << "年龄：" << p->age << "得分：" << p->score << endl;

}

int main6() {

	//创建结构体变量
	struct student s = { "张三",15,70 };
	
	//通过函数打印结构体变量信息
	printstudent(&s);

	cout << "main中张三年龄为：" << s.age << endl;

	system("pause");

	return 0;
}