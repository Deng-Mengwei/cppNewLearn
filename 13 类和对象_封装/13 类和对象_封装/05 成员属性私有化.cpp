//��Ϊ��03�����Ѿ���һ�� Person���ˣ��Żᱨ����ô����

//��Ա���Ծ����ܶ�ȥдprivate
#include<iostream>
using namespace std;
//��Ա��������Ϊ˽��
//1.���Կ��ƶ�д��Ȩ��

//2.����д���Լ�����ݵ���Ч��
class Person1 {

public:
	//��������
	void setName(string name) {
	
		m_Name = name;
	
	}
	//��ȡ����
	string getName() {
		return m_Name;
	
	}
	void setAge(int age) {

		if (age < 0 || age>150) {
		
			m_Age = 0;
			cout << "���Ǹ�������" << endl;
		}
		m_Age = age;
	
	}
	//��ȡ����
	int getAge() {

		//m_Age = 0;//��ʼ������ ������0~150
	
		return m_Age;
	}
	//�������� ֻд
	void setLover(string lover) {
	
		m_Lover = lover;
	}
private:

	//���� �ɶ���д
	string m_Name;
	//���� ֻ��
	int m_Age ;
	//���� ֻд

	string m_Lover;



};
int main5() {

	Person1 p;

	p.setName("����");
	p.setAge(1000);

	cout << "����Ϊ��" << p.getName() << endl;
	cout << "����Ϊ��" << p.getAge() << endl;

	//��������Ϊ�Ծ�
	//p.setLover("�Ծ�");

	system("pause");

	return 0;

}