#include<iostream>
#include<string>
#include<ctime>
//��ʵvs2022�Ѿ�����Ҫ����string �� vtime��
using namespace std;

//ѧ���Ľṹ��
struct Student {
	//����
	string sName;
	//����
	int score;

};

struct Teacher {
	//����
	string tName;
	struct Student sArray[5];

};

//����ʦ��ѧ����ֵ�ĺ��������ٿռ䣬�����и�ֵ
void allocateSpace(struct Teacher tArray[],int len) {
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];//׷��

		//ͨ��ѭ����ÿλ��ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student_";

			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 60+40;//40~99֮�������� rand() ����0-���������һ�������
			
			tArray[i].sArray[j].score = random;
		}
		
	}
}
//��ӡ������Ϣ
void printInfo(struct Teacher tArray[],int len) {
	for (int i = 0; i < len; i++) {

		cout << "��ʦ������" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
		
			cout << "\tѧ��������" << tArray[i].sArray[j].sName
				<< " ���Է�����" << tArray[i].sArray[j].score << endl;
		}
	
	}

}
int main7() {
	//���������
	srand((unsigned int)time(NULL));

	//����������ʦ������
	struct Teacher tArray[3];

	//ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//��ӡ������ʦ������ѧ����Ϣ
	printInfo(tArray, len);
	system("pause");

	return 0;
}