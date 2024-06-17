/*
 * @file 04_引用.cpp
 * @author by xianyang 
 * @time on 24-6-17
 * @description  变量的别名
 */

#include <iostream>

using namespace std;

int main() {
    // 引用创建后不可修改，必须给初值,不可以为空
    // 引用是一种别名，为已存在的变量提供另一个名称。

    int a = 10;
    int &b = a;
    // 初始化浮点型变量c，并通过引用d与其关联
    float c = 3.14;
    float &d = c;

    return 0;
}
