#include<iostream>
using namespace std;

//��̬��Ա����
class Person {

public:
	//��̬��Ա����
	//1 ���ж��󶼹���ͬһ������
	//2 ����׶ξͷ������ڴ�
	//3 �������� �����ʼ������
	static int m_A;

	//��̬��Ա����
	//1 ���ж�����һ������
	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func() {
	
		m_A = 100;//��̬��Ա�������Է��� ��̬�ĳ�Ա����
		//m_C = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա���� �ᱨ������ �޷����ֵ������ĸ����������
		cout << "static void func ����" << endl;
	}


	int m_C;//�Ǿ�̬��Ա����

	//��̬��Ա�������з���Ȩ�޵�
	//��̬��Ա�������з���Ȩ�޵�

private:
	static int m_B;
	static void func2() {
	
		cout << "static void func2����" << endl;
	}
};
int Person::m_A = 100;
int Person::m_B = 200;
void test01() {

	Person p;

	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;

	cout << p.m_A << endl;
	//cout << p.m_B << endl; //����������ǲ����Է��ʵ�
}
void test02() {
	//��̬��Ա���� ������ĳ�������ϣ����ж�����ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;


	//2.ͨ����������
	cout << Person::m_A << endl;
}

//�����ַ��ʷ�ʽ
void test03() {
	//1.ͨ���������
	Person p;
	p.func();

	//2.ͨ����������
	Person::func();

	//Person::func2(); ���ǲ����Է��ʵģ�����˽����������ʲ���˽�о�̬��Ա����
}
int main() {
	//test01();

	//test02();

	test03();

	system("Pause");

	return 0;
}