/*
 * @file 15_const关键字.cpp
 * @author by xianyang 
 * @time on 24-6-22
 * @description 
 */

#include <iostream>

using namespace std;

class test {
public:
    int n;
    static int m; //// 静态成员变量声明
    int const s;//使用构造函数的成员初始化列表来进行初始化

    test(int s, int n);// 构造函数声明
    void func();// 普通成员函数声明
    void func1() const;// const 成员函数声明

};

// 静态成员变量初始化,静态成员变量 m 的初始化需要在类外部进行
int test::m = 10;

// 构造函数实现
test::test(int s, int n) : s(s), n(n) {

}

// 普通成员函数实现
void test::func() {
    this->n = n;
    cout << "n:" << n << endl;
    //s = 10;//const修饰的变量改不了
    cout << "const修饰的s改不了:" << s << endl;
}

// const 成员函数实现
void test::func1() const {
    /*const修饰的函数中的东西改不了
     * 但可以修改静态成员变量 m。*/
//        n=5;
//        cout<<n<<endl;
    this->m = 20;
    cout << "静态成员变量 m可以修改:" << m << endl;
}


int main() {
    auto t = new test(666, 123);
    t->func();
    t->func1();
    delete t;
    return 0;
}
