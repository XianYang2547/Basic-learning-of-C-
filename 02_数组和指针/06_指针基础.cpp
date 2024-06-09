/*
 * @file 06_指针基础.cpp
 * @author by xianyang 
 * @time on 24-6-9
 * @description 数据类型在内存中的存储地址
 */

#include <iostream>

using namespace std;


int main() {
    // 初始化整型变量a，并打印其地址
    int a = 10;
    cout << "a的地址是：" << &a << endl;

    // 声明整型指针p，并将其指向变量a的地址
    int *p;//声明
    p = &a;//赋值将a的地址给ta(  &取变量的内存地址)
    // 打印指针p所指向的值
    cout << *p << endl;//输出指向的值

    // 声明并初始化整型指针p1，使其指向变量a的地址
    int *p1 = &a;
    // 打印指针p1的地址
    cout << "p1的地址是：" << p1 << endl;

    // 初始化字符变量c，并通过指针操作打印其值
    char c = 'a';
    char *p2 = &c;
    cout << *p2 << endl;

    return 0;
}
