#include<iostream>
using namespace std;

//���ѧ����
class Student {
public://����Ȩ��
	//���е����Ժ���Ϊ ͳһ��Ϊ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ϊ���� ��Ա����


	//����
	string m_Name;
	int m_Id;
	//��Ϊ
	//��ʾ������ѧ��
	void showStudent() {
		cout << "������" << m_Name << "ѧ�ţ�" << m_Id << endl;
	
	}

	//��������ֵ
	void setName(string name) {
		m_Name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setId(int Id) {
		m_Id = Id;
	}
};

int main2() {


	//����һ�������ѧ�� ʵ��������
	Student s1;
	//��s1���󣬽������Ը�ֵ����
	s1.m_Name = "����";
	s1.m_Id = 1;
	//��ʾѧ����Ϣ

	s1.showStudent();


	Student s2;
	//��s1���󣬽������Ը�ֵ����
	//s2.m_Name = "����";
	s2.setName("����");
	s2.setId(2);
	//��ʾѧ����Ϣ

	s2.showStudent();

	system("pause");

	return 0;

}