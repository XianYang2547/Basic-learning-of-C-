/*
 * @file 07_野指针和空指针.cpp
 * @author by xianyang 
 * @time on 24-6-9
 * @description 野指针是指指向未知内存地址或已经释放的内存地址的指针
 *              空指针 int *p=nullptr;
 *                     int *p =NULL
 */

#include <iostream>

using namespace std;

int main() {
	//野指针
	int *p;//声明一个整型指针变量p，但是没有初始化，其值是不确定的
	cout << p << endl;//没有被初始化，因此它的值是不确定的，
	// 它可能指向任意位置的内存。0x7ddb9de28e88
	//报错
	//*p=10;//p是一个野指针，没有指向有效的内存空间，所以解引用*p是未定义行为
	//正确做法
	int *p0 = new int;
	*p0 = 10;
	cout << *p0<<endl;
	delete p0;


	//空指针
	int *p1 = nullptr;
	double *p2 = nullptr;
//
//	//void 类型的指针，是一种通用的指针类型，可以存储任意类型的指针
	string sex = "dadads";
	double res = 56.5;
	void *p3 = &sex;
	void *p4 = &res;
	//不能直接解引用输出其指向的内容
	/*cout <<*p3<<endl;
	*p4 = 54;
	cout<<*p4<<endl;*/

	cout << *static_cast<string *>(p3) << endl;  // 通过类型转换解引用 void 指针
	*static_cast<double *>(p4) = 54;  // 通过类型转换修改 double 变量的值
	cout << *static_cast<double *>(p4) << endl;  // 输出修改后的值
	return 0;
}
