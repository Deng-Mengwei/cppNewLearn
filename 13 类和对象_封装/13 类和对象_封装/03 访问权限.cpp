#include<iostream>
using namespace std;

//����Ȩ��������
//1.public ����Ȩ�� ����Ա�����ڿ��Է��� ������Է���
class Person {
public:
	string m_Name;//����
protected:
	string m_Car;//����
private:
	int m_Password;//���п�����

public:
	void function() {
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}

};

//2.3�ڼ̳�������

//2.protected ����Ȩ�� ����Ա���ڿ��Է��� ���ⲻ���Է��� ���ӿ��Է��ʸ����еı���Ȩ��

//3.private ˽��Ȩ�� ����Ա������Է��� ���ⲻ���Է��� ���Ӳ����Է��ʸ��׵�˽��Ȩ��

int main3() {

	//ʵ�����������
	Person p1;

	p1.m_Name = "����";

	//p1.m_Car = "����";//����Ȩ�����ݣ���������ʲ���
	// 

	//p1.m_Password=123;//˽��Ȩ�޵����ݣ����� ���ʲ���
	p1.function();

	system("pause");

	return 0;

}