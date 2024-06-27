/*
 * @file 03_纯虚函数.cpp
 * @author by xianyang 
 * @time on 24-6-27
 * @description 
 */

#include <iostream>

using namespace std;

class Father {
public:
	//在基类中声明的虚函数，但没有在基类中进行实现的函数。
	// 纯虚函数的声明方式是在函数声明的结尾加上 = 0，
	//一般不自己实现函数体，子类去重写
	// 子类必须重写这个函数，否则编译器会报错。
	virtual void func() = 0;
	// 普通虚函数，可选择性地由派生类覆盖
	virtual void show() {
		cout << "Father::show()" << endl;}
};

class Son : public Father {
public:
	// 必须实现纯虚函数,不然它也不能实例化
	void func() override {
		cout << "Son::func()" << endl;
	}
};

int main() {
//	Father bab;// 有纯虚函数，不能实例化抽象类,但可以使用指针
	Son son;
	son.func();// 调用派生类的实现
	son.show();// 调用基类的普通虚函数

	Father *p = &son;// 基类指针指向派生类对象
	p->func(); // 调用派生类的实现
	p->show(); // 调用基类的普通虚函数

	return 0;
}
