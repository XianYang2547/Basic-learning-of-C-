/*
 * @file 01_继承.cpp
 * @author by xianyang 
 * @time on 24-6-23
 * @description  单继承
 */

#include <iostream>

using namespace std;

class Penson_A {
public:
    string name;
    int age = 4;
    int height = 5;
    int weight=99;

    void eat() {
        cout << "eat" << endl;
    }

    void sleep() {
        cout << "sleep" << endl;
    }

};
class Penson_B: public Penson_A {
    //写一些函数或者变量使用Penson_A中的东西
public:
    void printAgeFromPensonA() {
        cout << "Age from Penson_A: " << age << endl;  // 直接访问从 Penson_A 继承来的 age 成员变量
    }
    int weight=998;
    int sum = age+height;

};

int main() {
    Penson_B b;
    b.eat();
    cout << "sum: " << b.sum << endl;
//子类中有和父类中同名的,访问自己的
    cout<<b.weight<<endl;
    //访问父类的
    cout<<b.Penson_A::weight<<endl;
    //继承多个父类时，这些父类中如果有同名的成员时，访问时通过父类名来区分
    //如：b.Penson_A::weight
    //    b.Penson_C::weight
    return 0;
}
