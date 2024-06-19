/*
 * @file 10_初始化列表.cpp
 * @author by xianyang
 * @time on 24-6-19
 * @description
 */

#include <iostream>

using namespace std;

// Person 类定义
class Person {
public:
    // age 成员变量声明
    int age;
    // num 成员变量声明，为常量成员，初始化时指定值
    const int num;

    // 构造函数声明，接受两个参数用于初始化 age 和 num
    // explicit 关键字用于防止隐式类型转换
    explicit Person(int age,int num);
};

// 构造函数定义，使用初始化列表初始化 age 和 num
Person::Person(int age,int num): age(age), num(num) {
    cout << "有参构造" << endl;
}

int main() {
    // 创建一个 Person 类对象 xiaohong，初始化 age 为 5，num 为 88
    auto xiaohong=new Person(5,88);
    // 输出 xiaohong 的 age 值
    cout << xiaohong->age << endl;
    // 输出 xiaohong 的 num 值
    cout << xiaohong->num << endl;

    // 释放 xiaohong 所占内存
    delete xiaohong;
    return 0;
}

