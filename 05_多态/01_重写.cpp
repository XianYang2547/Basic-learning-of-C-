/*
 * @file 01_重写.cpp
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
};

int main() {
	auto *animal = new Animal();
	auto *dog = new Dog();
	animal->eat();
	dog->eat();
	delete animal;
	delete dog;
	return 0;
}
