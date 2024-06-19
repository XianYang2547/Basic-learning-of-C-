/*
 * @file 09_构造函数.cpp
 * @author by xianyang 
 * @time on 24-6-19
 * @description 
 */

#include <iostream>
using namespace std;

class Person {
public:
    int age;
    //构造函数
    Person();
    //当一个构造函数被声明为 explicit 时，它告诉编译器只能用于显式地创建对象，
    // 而不能通过隐式类型转换来调用这个构造函数
    explicit Person(int age);

};

Person::Person() {
    cout << "无参构造" << endl;
}
Person::Person(int age) {
    cout << "有参构造" << endl;
    this->age = age;
}


int main() {
    auto xiaobai=new Person();
    xiaobai->age = 20;
    cout << xiaobai->age << endl;

    /*
     * 类型推断和显式声明：
        auto xiaohong = new Person(30); 使用了 auto 关键字，编译器会根据右侧的表达式推断出 xiaohong 是一个 Person* 类型的指针。
        Person *xiaoming = new Person(40); 显式声明了 xiaoming 的类型为 Person*。
        使用方式和访问方式：
        auto xiaohong 可能更加方便，省略了显式指针类型，但可能使得类型不够明确。
        Person *xiaoming 显式地声明了指针类型，更加明确。
     * */

    auto xiaohong=new Person(30);
    cout << xiaohong->age << endl;

    Person * xiaoming = new Person(40);
    cout << xiaoming->age << endl;

    delete xiaobai;
    delete xiaohong;
    delete xiaoming;
    return 0;
}
