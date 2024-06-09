/*
 * @file 09_内存分配_new和delete.cpp
 * @author by xianyang 
 * @time on 24-6-9
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    /*new
     * new type申请普通变量空间
     * new type[] 申请数组空间
     *
     * delete
     * delete type 释放普通变量空间
     * delete type[] 释放数组空间
     * */

    // 动态分配一个整型变量，并初始化为1314
    int *p = new int;
    *p = 1314;
    // 输出动态分配的整型变量的值
    cout << *p << endl;
    // 释放之前动态分配的内存
    delete p;

    // 动态分配一个整型数组，长度为10，并初始化部分元素
    int *p1 = new int[10];
    p1[0] = 666;
    *(p1+1)=777;
    // 输出数组第一个元素的值
    cout << p1[0] << endl;
    // 输出数组第二个元素的值
    cout << p1[1] << endl;
    // 释放之前动态分配的内存
    delete[] p1;

    return 0;
}
