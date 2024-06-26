/*
 * @file 04_菱形继承.cpp
 * @author by xianyang 
 * @time on 24-6-24
 * @description 
 */

#include <iostream>

using namespace std;

class A {
public:
    int n{};
};

class A1 : virtual public A {
public:
    int a1;
};

class A2 :virtual public A {
public:
    int a2;
};

class A1A2 : public A1, public A2 {
public:
    int aa;
};

int main() {
    A1A2 a1a2 = A1A2();
    //    a1a2.n;
    /* A1A2 继承了 A1 和 A2，而 A1 和 A2 都继承了 A 类。
     * A1A2 对象中包含两份 A 类的子对象，从而引起成员访问的二义性问题
     * */
    // 可以通过父类名来访问
    /*a1a2.A1::n;
    a1a2.A2::n;*/
    /*拟继承：在 A1 和 A2 类中，使用了 virtual 关键字进行虚拟继承，
     * 确保 A1A2 类中只包含一个 A 类的子对象
     * */
    a1a2.n;
    a1a2.A::n;
    return 0;
}
