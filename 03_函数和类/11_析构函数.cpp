/*
 * @file 11_析构函数.cpp
 * @author by xianyang 
 * @time on 24-6-19
 * @description 
 */

#include <iostream>

using namespace std;

class Person {
public:
    int age;
    const int num;
    explicit Person(int age,int num);
    ~Person();
};

// 构造函数定义，使用初始化列表初始化 age 和 num
Person::Person(int age,int num): age(age), num(num) {
    cout << "有参构造" << endl;
}
Person::~Person() {
    cout << "析构函数" << endl;
}

int main() {
    // 创建一个 Person 类对象 xiaohong，初始化 age 为 5，num 为 88
    auto xiaohong=new Person(5,88);
    cout << xiaohong->age << endl;
    cout << xiaohong->num << endl;

    delete xiaohong;
    return 0;
}
