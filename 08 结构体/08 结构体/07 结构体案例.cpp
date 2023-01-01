#include<iostream>
#include<string>
#include<ctime>
//其实vs2022已经不需要导入string 和 vtime了
using namespace std;

//学生的结构体
struct Student {
	//姓名
	string sName;
	//分数
	int score;

};

struct Teacher {
	//姓名
	string tName;
	struct Student sArray[5];

};

//给老师和学生赋值的函数，开辟空间，并进行赋值
void allocateSpace(struct Teacher tArray[],int len) {
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];//追加

		//通过循环给每位老师所带的学生赋值
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student_";

			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 60+40;//40~99之间的随机数 rand() 返回0-最大整数的一个随机数
			
			tArray[i].sArray[j].score = random;
		}
		
	}
}
//打印所有信息
void printInfo(struct Teacher tArray[],int len) {
	for (int i = 0; i < len; i++) {

		cout << "老师姓名：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
		
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName
				<< " 考试分数：" << tArray[i].sArray[j].score << endl;
		}
	
	}

}
int main7() {
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建三名老师的数组
	struct Teacher tArray[3];

	//通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//打印所有老师及所带学生信息
	printInfo(tArray, len);
	system("pause");

	return 0;
}