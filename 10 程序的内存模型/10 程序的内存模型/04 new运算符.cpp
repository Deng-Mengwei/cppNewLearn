#include<iostream>
using namespace std;

//new�����﷨
//ɾ��delete

//1.new�����﷨
int* func() {
	//�ڶ���������������
	//new���ص��ǣ����������͵�ָ��
	int* p = new int(10);//һ�����������������10
	return p;

}

void test01() {

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	delete p;
	cout << *p << endl;//��������ڴ��Ѿ����ͷţ��ٴη����ǷǷ��������ᱨ��

}
//2.�ڶ�������new���ٺ���
void test02() {

	//����10�������ݵ����飬�ڶ���
	int* arr = new int[10];//10����������10��Ԫ��

	for (int i = 0; i < 10; i++) {
	
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ100~109
	
	}
	for (int i = 0; i < 10; i++) {

		cout << arr[i] << " ";

	}
	cout << endl;
	//�ͷŶ�������
	//�ͷ������ʱ��Ҫ��[]�ſ���
	delete[] arr;
}



int main() {

	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ����ùؼ��� delete

	//test01();
	test02();

	system("pause");

	return 0;
}