#include<iostream>
#include"showMenu.h"

/*������һ�κ���ֵ�system����ȷ������֪��˵������VS2019�Ժ�İ汾�����Ż�����Ҫ�ٵ���
#include<string>
�ײ���ܻ����һЩ��ͻ
*/
using namespace std;

#define MAX 1000

//��ϵ�˽ṹ��
struct Person {
	//����
	string m_Name;
	//�Ա� 1 �� 2 Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//ͨѶ¼�ṹ��
struct Addressbooks {

	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨ��¼�е�ǰ��¼��ϵ�˸���
	int m_Size;

};

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
//����1 ͨѶ¼ ����2 �Ա�����
int isExist(Addressbooks* abs, string name) {
	for(int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
		
			return i;//�ҵ��ˣ�����������������е��±���
		}
	}
	return -1;//�������������û���ҵ�������-1
}

//1.�����ϵ��
void addPerson(Addressbooks* abs) {
	//�ж�ͨ��¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX) {
	
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else {
	
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;

		while (true) {

			cin >> sex;
			//����������1����2 �����˳�ѭ������Ϊ���������ȷ
			if (sex == 1 || sex == 2) {

				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age >= 0 && age < 150) {
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "������һ�������˵����䣡" << endl;
		}

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		
		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ���" << endl;
		system("pause");//�밴���������
		system("cls");//����
	}
}

//2.��ʾ���е���ϵ��
void showPerson(Addressbooks* abs) {
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��ϢΪ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0) {
	
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
	
		for (int i = 0; i < abs->m_Size; i++) {
		
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";//��Ŀ�����
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//�����������
	system("cls");//����
}

//3.ɾ����ϵ��
void deletePerson(Addressbooks* abs) {

	cout << "������Ҫɾ������ϵ�ˣ�" << endl;

	string name;
	cin >> name;

	//ret==-1 δ�鵽
	//ret!=-1 �鵽��
	int ret = isExist(abs, name);

	//Ҫɾ�����ģ������ĺ��������ǰ�ƶ���������ͨѶ¼�м�¼����Ա��������һ����һ�Ĳ���������һ��һ����ǰ�ƣ����ܸ��ǣ�
	if (ret != -1) {
	
		for (int i = ret; i < abs->m_Size; i++) {
		//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}

//4.����ָ����ϵ��

void findPerson(Addressbooks*abs) {
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ���ͨѶ¼��
	int ret = isExist(abs, name);

	if (ret != -1) {
	
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ͥסַ��" << abs->personArray[ret].m_Addr << endl;

	}//�ҵ���ϵ��
	else {
	
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//5.�޸���ϵ��
void modifyPerson(Addressbooks* abs) {

	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				//������ȷ �˳�ѭ������
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}//�ҵ�ָ����ϵ��

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��ַ
		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ���" << endl;
	}	
	else{

		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}
//6.ֻҪ��ͨѶ¼��¼����ϵ������Ϊ0�����߼���ռ���
void cleanPerson(Addressbooks* abs) {
	int choice = 0;
	cout << "���Ҫȫ������" << endl;
	cout << "�����£�ȫ�������1" << endl;
	cout << "�������˰ɣ�2" << endl;
	
	while (true) {
		cin >> choice;
		if (choice == 1 || choice == 2) {
		
			switch (choice) {
			
			case 1:
			{
				abs->m_Size = 0;//�����ڼ�¼��ϵ��������Ϊ0�����߼��������
				cout << "ͨѶ¼�����" << endl;
				break;
			}

			case 2:
				cout << "лл������" << endl;
				break;
			}
			break;
		}
		else {
			cout << "����������������룡" << endl;
		}

	}
	//�����������0
	system("pause");
	system("cls");
}

int main() {

	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;//�����û�����ı���

	//�˵�����
	
	while (true) {

		showMenu();

		cin >> select;

		switch (select) {

		case 1://�����ϵ��
			addPerson(&abs);//���õ�ַ���ݣ���������ʵ��
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨ��¼
			cout << "��ӭ�´�ʹ��" << endl;

			system("pause");
			return 0;

			break;
		}
	
	}

}