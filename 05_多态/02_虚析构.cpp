/*
 * @file 02_虚析构.cpp
 * @author by xianyang
 * @time on 24-6-26
 * @description
 */

#include <iostream>

using namespace std;

class Animal {
public:
	string name;

	// 虚函数
	virtual void eat() {
		cout << "Animal is eating" << endl;
	}

	virtual ~Animal() {
		cout << "Animal is dying" << endl;
	};
};
class Dog : public Animal {
public:
//	void eat() {
//		cout << "Dog is eating" << endl;
//	}
	// 重写父类方法
	void eat() override{
		cout << "Dog is eating" << endl;
	}
	~Dog() override {
		cout << "Dog is dying" << endl;
}
};

int main() {
	//一般是直接写auto
	/*
	auto *a = new Dog();
	 使用 auto时，删除时会自动删除
	 不需要父类写虚析构，子类也不写
	 Dog is dying
	 Animal is dying
	*/
	Animal *a = new Dog();
	//Dog is dying
	//Animal is dying
	// 使用父类的指针指向子类时，delete a删除的父类的，
	// 子类一般比父类多一些，子类的就没有删掉，写了父类虚析构，
	// （子类重写不重写都可以），
	// 指针指向的是子类对象，调用delete时，会执行子类的析构，
	// 然后再执行父类的析构，就完整的释放了
	delete a;
	return 0;
}