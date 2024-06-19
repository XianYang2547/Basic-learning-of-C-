/*
 * @file 08_类和对象.cpp
 * @author by xianyang 
 * @time on 24-6-18
 * @description 
 */

#include <iostream>

using namespace std;
// 定义Sheep类，代表一只羊
class Sheep {
public:
    string name;
    void setAge(int input_age) {
        //函数的参数名和成员变量的名字相同时
        //void setAge(int age)
        //this->age = input_age;
        age = input_age;
    }
    void speak();
private:
    int age;
};

void Sheep::speak() {
    cout<<"I am "<<name<<", I am "<<age<<" years old."<<endl;
}

int main() {
    Sheep xiyangyang;
    xiyangyang.name = "xiyangyang";
    xiyangyang.setAge(4);
    xiyangyang.speak();

    auto xiaoming = new Sheep();
    xiaoming->speak();
    delete xiaoming;
    return 0;
}
