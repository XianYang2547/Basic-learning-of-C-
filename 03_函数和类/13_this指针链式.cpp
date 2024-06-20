/*
 * @file 13_this指针链式.cpp
 * @author by xianyang 
 * @time on 24-6-20
 * @description 
 */

#include <iostream>

using namespace std;


class MyClass {
private:
    int value;

public:
    int score=90;
    // 构造函数
    explicit MyClass(int value) {
        this->value = value;  // 使用 this 指针初始化成员变量
    }

    // 成员函数，设置 value，并返回当前对象的引用
    /*MyClass& 表示函数 setValue 是 MyClass 类的成员函数，并且返回一个 MyClass 类型的引用。
     * 这种形式的声明表明 setValue 函数是属于 MyClass 类的一部分，
     * 并且可以直接访问 MyClass 类的私有成员 value。*/
    MyClass& setValue(int value) {
        this->value = value;
        return *this;  // 返回当前对象的引用
    }

    // 成员函数，输出当前对象的 value
    void printValue() {
        cout << "Value: " << this->value << endl;
    }
};

int main() {
    MyClass obj1(10);
    obj1.printValue();
    // 链式调用
    obj1.setValue(20).printValue();
    cout<<obj1.setValue(520).score<<endl;
    return 0;
}
