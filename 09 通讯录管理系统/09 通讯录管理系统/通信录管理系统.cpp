#include<iostream>
#include"showMenu.h"

/*出现了一次很奇怪的system不明确报错，看知乎说肯能是VS2019以后的版本升级优化，不要再导入
#include<string>
底层可能会产生一些冲突
*/
using namespace std;

#define MAX 1000

//联系人结构体
struct Person {
	//姓名
	string m_Name;
	//性别 1 男 2 女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//通讯录结构体
struct Addressbooks {

	//通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通信录中当前记录联系人个数
	int m_Size;

};

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
//参数1 通讯录 参数2 对比姓名
int isExist(Addressbooks* abs, string name) {
	for(int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
		
			return i;//找到了，返回这个人在数组中的下标编号
		}
	}
	return -1;//如果遍历结束都没有找到，返回-1
}

//1.添加联系人
void addPerson(Addressbooks* abs) {
	//判断通信录是否已满，如果满了就不再添加
	if (abs->m_Size == MAX) {
	
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else {
	
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;

		while (true) {

			cin >> sex;
			//如果输入的是1或者2 可以退出循环，因为输入的是正确
			if (sex == 1 || sex == 2) {

				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age >= 0 && age < 150) {
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "请输入一个正常人的年龄！" << endl;
		}

		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		
		//住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功！" << endl;
		system("pause");//请按任意键继续
		system("cls");//清屏
	}
}

//2.显示所有的联系人
void showPerson(Addressbooks* abs) {
	//判断通讯录中人数是否为0，如果为0，提示信息为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0) {
	
		cout << "当前记录为空" << endl;
	}
	else {
	
		for (int i = 0; i < abs->m_Size; i++) {
		
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";//三目运算符
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}

//3.删除联系人
void deletePerson(Addressbooks* abs) {

	cout << "请输入要删除的联系人：" << endl;

	string name;
	cin >> name;

	//ret==-1 未查到
	//ret!=-1 查到了
	int ret = isExist(abs, name);

	//要删除李四，将李四后的数据向前移动，并且让通讯录中记录的人员个数，做一个减一的操作（必须一个一个的前移，不能覆盖）
	if (ret != -1) {
	
		for (int i = ret; i < abs->m_Size; i++) {
		//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}

	system("pause");
	system("cls");
}

//4.查找指定联系人

void findPerson(Addressbooks*abs) {
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否在通讯录中
	int ret = isExist(abs, name);

	if (ret != -1) {
	
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "家庭住址：" << abs->personArray[ret].m_Addr << endl;

	}//找到联系人
	else {
	
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//5.修改联系人
void modifyPerson(Addressbooks* abs) {

	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				//输入正确 退出循环输入
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}//找到指定联系人

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//地址
		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功！" << endl;
	}	
	else{

		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}
//6.只要将通讯录记录的联系人数量为0，做逻辑清空即可
void cleanPerson(Addressbooks* abs) {
	int choice = 0;
	cout << "真的要全部清空嘛？" << endl;
	cout << "别啰嗦！全部清除：1" << endl;
	cout << "啊，算了吧：2" << endl;
	
	while (true) {
		cin >> choice;
		if (choice == 1 || choice == 2) {
		
			switch (choice) {
			
			case 1:
			{
				abs->m_Size = 0;//将当期记录联系人数量置为0，做逻辑情况操作
				cout << "通讯录已清空" << endl;
				break;
			}

			case 2:
				cout << "谢谢挽留！" << endl;
				break;
			}
			break;
		}
		else {
			cout << "输入错误，请重新输入！" << endl;
		}

	}
	//按任意键后清0
	system("pause");
	system("cls");
}

int main() {

	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0;//创建用户输入的变量

	//菜单调用
	
	while (true) {

		showMenu();

		cin >> select;

		switch (select) {

		case 1://添加联系人
			addPerson(&abs);//利用地址传递，可以修饰实参
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			deletePerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通信录
			cout << "欢迎下次使用" << endl;

			system("pause");
			return 0;

			break;
		}
	
	}

}