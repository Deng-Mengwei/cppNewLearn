#include<iostream>
#include<string>
using namespace std;

//const��ʹ�ó���

struct student {
	//����
	string name;
	//����
	int age;
	//����
	int score;

};
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��ḳֵ���µĸ�������

void printstudent(const student *p) {
	//s->age = 150;//����const��һ�����޸ĵĲ����ͻ��żŶ�����Է�ֹ�������
	cout << "������" << p->name << "���䣺" << p->age << "�÷֣�" << p->score << endl;

}

int main6() {

	//�����ṹ�����
	struct student s = { "����",15,70 };
	
	//ͨ��������ӡ�ṹ�������Ϣ
	printstudent(&s);

	cout << "main����������Ϊ��" << s.age << endl;

	system("pause");

	return 0;
}