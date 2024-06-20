/*
 * @file 12_this指针.cpp
 * @author by xianyang 
 * @time on 24-6-20
 * @description 
 */

#include <iostream>

using namespace std;

class Person {
public:
    int age;//当成员变量和局部变量同名时，使用 this-> 可以明确指出访问的是成员变量而不是局部变量
    void setAge(int age) {
        //age=age;  它将参数 age 赋值给自身，而不是类的成员变量
        // 使用 this 指针来区分成员变量 age 和参数 age
        this->age = age;
        cout << "this->age=" << this->age << endl;
    }

};

int main() {
    auto xiaobai = new Person();
    xiaobai->setAge(18);
    delete xiaobai;
    return 0;
}
