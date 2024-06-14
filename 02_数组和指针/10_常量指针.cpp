/*
 * @file 10_常量指针.cpp
 * @author by xianyang 
 * @time on 24-6-13
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    //1.指向const的指针
    int num1 = 1, num2 = 2;
    const int *p1 = &num1;
    //*p1 = 3;//指向区域的值，不可修改
    p1 = &num2;//可以修改指向

    //2.const指针
    int *const p2 = &num1;//必须初始化地址
    *p2 = 3;//指向区域的值，可以修改
    //p2 = &num2;//指向地址，不可以修改

    //3.指向const的const的指针
    const int *const p3 = &num1;
    //*p3 = 3;//指向区域的值，不可修改
    //p3 = &num2;//指向地址，不可修改
    return 0;
}
