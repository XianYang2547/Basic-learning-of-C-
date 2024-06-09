/*
 * @file 07_野指针和空指针.cpp
 * @author by xianyang 
 * @time on 24-6-9
 * @description 野指针是指指向未知内存地址或已经释放的内存地址的指针
 *              空指针 int *p=nullptr;
 *                     int *p =NULL
 */

#include <iostream>

using namespace std;

int main() {
    //野指针
    int *p;//声明了一个整型指针变量p
    // 没有被初始化，因此它的值是不确定的，它可能指向任意位置的内存。
    *p=10;

    //空指针
    int *p1=nullptr;

    return 0;
}
