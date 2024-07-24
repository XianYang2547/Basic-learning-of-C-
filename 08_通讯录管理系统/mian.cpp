/****************************************************
 * @file mian.cpp
 * @author by xianyang 
 * @time on 24-7-22 19:53
 * @E-mail: xy_mts@163.com
 * @description:
 ****************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
	string name;
	int age;
	string sex;
	long phone;
};
std::vector<Person> Person_information;


void show_menu() {
	cout << "*************************" << endl;
	cout << "*******" << "1、添加联系人" << "*******" << endl;
	cout << "*******" << "2、显示联系人" << "*******" << endl;
	cout << "*******" << "3、删除联系人" << "*******" << endl;
	cout << "*******" << "4、查找联系人" << "*******" << endl;
	cout << "*******" << "5、修改联系人" << "*******" << endl;
	cout << "*******" << "6、清空联系人" << "*******" << endl;
	cout << "*******" << "0、退出通讯录" << "*******" << endl;
	cout << "*************************" << endl;
}

void add_contacter() {
	string name;
	int age;
	int sex_num;
	long phone;

	cout << "请输入姓名:";
	cin >> name;
	cout << "请输入年龄:";
	cin >> age;
	cout << "请输入性别:" << endl;
	cout << "1 --男" << endl;
	cout << "2 --女" << endl;
	cin >> sex_num;
	string sex = (sex_num == 1) ? "男" : "女";
	cout << "请输入电话:";
	cin >> phone;
	if (Person_information.size() <= 1000) {
		Person_information.push_back({name, age, sex, phone});
		cout << "添加成功" << endl;
	} else {
		cout << "联系人数量超过1000上限" << endl;
	}

}

void show_contacter() {
	if (Person_information.empty()) {
		cout << "通讯录为空" << endl;
	} else {
		cout << "所有联系人信息如下：" << endl;
		for (const auto &info: Person_information) {
			cout << "姓名: " << info.name << "\t年龄: " << info.age << "\t性别: " << info.sex << "\t电话: "
			     << info.phone << endl;
		}
		cout << "总共" << Person_information.size() << "个联系人" << endl;
	}
}

void delete_contacter() {
	string name;
	cout << "输入要删除的联系人名字:";
	cin >> name;
	/*td::remove_if 是 C++ 标准库中的算法，用于从容器中移除满足特定条件的元素。它不会真正删除元素，而是将要删除的元素移动到容器的末尾，并返回一个指向新的逻辑末尾之后第一个被移动元素的迭代器。
	  lambda 表达式 ([&](const information &info) { return info.name == name; }) 是一个谓词，用于指定删除条件。在这里，它检查联系人信息的姓名是否等于传入的 name。
	  如果找到满足条件的元素，std::find_if 返回一个指向该元素的迭代器 it；如果没有找到，返回 container.end()。

	  lambda 表达式作为 std::remove_if 的第三个参数，用于从容器 container 中删除满足条件的 Person 对象。
	  当 info.name == name 条件成立时，该元素将被移到容器末尾，然后通过 container.erase(new_end, container.end()) 删除多余的元素。*/
	//it 是 std::remove_if 的返回值，指向第一个要移除的元素的位置
	auto it = std::remove_if(Person_information.begin(), Person_information.end(), [&](const Person &info) {
		return info.name == name;
	});
	//如果 it != tongxunlu.end()，表示找到了要删除的信息
	if (it != Person_information.end()) {
		//使用 tongxunlu.erase(it, tongxunlu.end()) 将从 it 开始到容器末尾的所有元素移除。
		Person_information.erase(it, Person_information.end());
		std::cout << "Deleted information for " << name << std::endl;
	} else {
		std::cout << "No information found for " << name << std::endl;
	}
	show_contacter();
}

void find_contacter() {
	string name;
	cout << "输入要查找的联系人名字:";
	cin >> name;
	/*lambda 表达式作为 std::find_if 的第三个参数，用于查找容器 container 中第一个满足条件的 Person 对象。
	 * 当 info.name == name 条件成立时，std::find_if 将返回指向该元素的迭代器 it。
	 * */
	auto it = std::find_if(Person_information.begin(), Person_information.end(), [&](const Person &info) {
		return info.name == name;
	});
	if (it != Person_information.end()) {
		cout << "找到联系人，信息如下：" << endl;
		cout << "姓名: " << it->name << "\t年龄: " << it->age << "\t性别: " << it->sex << "\t电话: "
		     << it->phone << endl;
	} else { cout << "联系人不存在" << endl; }
}

void change_contacter(const string &name) {
	auto it = std::find_if(Person_information.begin(), Person_information.end(), [&](const Person &info) {
		return info.name == name;
	});
	if (it != Person_information.end()) {
		int num;
		for (int i = 0; i < 6; i++) {
			cout << "请输入要修改的内容:1 姓名 2 年龄 3 性别 4 电话 [0退出]" << endl;
			cin >> num;
			switch (num) {
				case 1: {
					string new_name;
					cin >> new_name;
					it->name = new_name;
					cout << "姓名修改成功" << endl;
					break;
				}
				case 2: {
					int age;
					cin >> age;
					it->age = age;
					cout << "年龄修改成功" << endl;
					break;
				}
				case 3: {
					int sex_num;
					cin >> sex_num;
					it->sex = (sex_num == 1) ? "男" : "女";
					cout << "性别修改成功" << endl;
					break;
				}
				case 4: {
					long phone;
					cin >> phone;
					it->phone = phone;
					cout << "电话修改成功" << endl;
					break;
				}
				default:
					break;
			}
			if (num == 0) { break; }
		}
	}

}

void empty_contacter() {
	Person_information.clear();
	cout << "清空成功" << endl;
	show_contacter();

}

int main() {
	Person_information.push_back({"zhangsan", 18, "nan", 151});
	Person_information.push_back({"lisi", 38, "nv", 298});
	int num;
	bool exit = false;
	while (!exit) {
		show_menu();
		cout << "请输入选项: ";
		cin >> num;
		switch (num) {
			case 1:
				add_contacter();
				break;
			case 2:
				show_contacter();
				break;
			case 3:
				delete_contacter();
				break;
			case 4:
				find_contacter();
				break;
			case 5: {
				string name;
				cout << "输入要修改的联系人名字:";
				cin >> name;
				change_contacter(name);
				break;
			}
			case 6:
				empty_contacter();
				break;
			case 0:
				exit = true;
				cout << "退出通讯录，感谢使用！" << endl;
				break;
			default:
				cout << "无效选项，请重新输入。" << endl;
				break;
		}
	}
	return 0;
}
