//#include<iostream>
//using namespace std;
////�����ǳ��������
//
//class Person {
//public:
//	Person() {
//		cout << "Person��Ĭ�Ϻ�������" << endl;
//	}
//	Person(int age,int height) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person���вκ�������" << endl;
//	}
//	//�Լ�ʵ�ֿ������캯�� ���ǳ����������
//	Person(const Person& p) {
//		cout << "Person �������캯������" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;���Ǳ�����Ĭ��д�Ĵ��� ǳ����
//
//		m_Height = new int(*p.m_Height);
//	
//	}
//
//	~Person() {
//
//		//�������� ���������ٵ��������ͷ�����
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		
//		}
//			cout << "Person��������������" << endl; 
//	}
//
//	int m_Age;//����
//	int* m_Height;//���
//};
//
//void test01() {
//
//	Person p1(18,160);
//
//	cout << "p1������Ϊ��" << p1.m_Age << endl << "���Ϊ��" << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2������Ϊ��" << p2.m_Age << endl << "���Ϊ��" << *p2.m_Height << endl;//����������ǳ����
//}
////ջ �Ƚ������p2�ȱ��ͷ�
////�� �Ƚ��ȳ�
//
////p1 p2��Ϊ�������� ջ�� �����ڲ��������Ǵ����ڶ�����
////����p2�ȳ�ȥ
//
////ǳ�����������⣬�����ڴ��ظ��ͷ�
////ǳ������������������
//
///*����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������*/
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}