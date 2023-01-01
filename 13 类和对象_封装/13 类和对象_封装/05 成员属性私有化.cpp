//因为我03里面已经有一个 Person类了，才会报错到这么讨厌

//成员属性尽可能都去写private
#include<iostream>
using namespace std;
//成员属性设置为私有
//1.可以控制读写的权限

//2.对于写可以检测数据的有效性
class Person1 {

public:
	//设置姓名
	void setName(string name) {
	
		m_Name = name;
	
	}
	//获取姓名
	string getName() {
		return m_Name;
	
	}
	void setAge(int age) {

		if (age < 0 || age>150) {
		
			m_Age = 0;
			cout << "你是个老妖精" << endl;
		}
		m_Age = age;
	
	}
	//获取年龄
	int getAge() {

		//m_Age = 0;//初始化年龄 必须是0~150
	
		return m_Age;
	}
	//设置情人 只写
	void setLover(string lover) {
	
		m_Lover = lover;
	}
private:

	//姓名 可读可写
	string m_Name;
	//年龄 只读
	int m_Age ;
	//情人 只写

	string m_Lover;



};
int main5() {

	Person1 p;

	p.setName("张三");
	p.setAge(1000);

	cout << "姓名为：" << p.getName() << endl;
	cout << "年龄为：" << p.getAge() << endl;

	//设置情人为苍井
	//p.setLover("苍井");

	system("pause");

	return 0;

}