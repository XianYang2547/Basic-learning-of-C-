/*
 * @file 16_友元关系(好朋友).cpp
 * @author by xianyang
 * @time on 24-6-22
 * @description
 */

#include <iostream>

using namespace std;

class B; // 前向声明类 B
// for function
class A {
    /*如果函数 b 被声明为类 A 的友元函数，
     * 那么 b 函数可以访问类 A 中所有的成员*/
    friend void other(A a);

    friend class B;

public:
    string name;
    int age{5};

    A() {
        name = "xian_yang";
        age = 28;
        score = 100;
    }

    void speak() {
        cout << name << "6666666666666" << endl;
    }

    void printGirls(B b);

private:
    int score{99};
};


void other(A a) {
    cout << a.name << endl;
    a.score = 555;
    cout << a.age << endl;
    cout << a.score << endl;
    a.speak();
};


// for class

class B {
    friend class A;

    string grils = "c++";
public:
    void runs(A a) {
        cout << a.name << endl;
    }

};
// 需要放到B的后面，不然编译器找不到B的完整定义
void A::printGirls(B b) {
    cout << b.grils << endl;
}
int main() {
    A a = A();
    B b;
    a.name = "xian_yang";
    other(a);


    b.runs(a);
    a.printGirls(b);
    return 0;
}
