#include<iostream>
using namespace std;

int main15() {
	//�˷��ھ���
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {

			cout << j << " * " << i << " = " << j * i<< "\t";

		}
		cout << endl;
	}
	system("pause");

	return 0;
}