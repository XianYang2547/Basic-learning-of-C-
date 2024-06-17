/*
 * @file 02_函数参数的传递.cpp
 * @author by xianyang
 * @time on 24-6-16
 * @description
 */

#include <iostream>

using namespace std;
//////////////////////////////////////////////
/*          值传递-----复制值，不对实参本身产生影响
 * 函数传参  地址（指针）传递-----对实参产生影响
 *          引用传递-------像普通变量那样操作，但对实参本身可以产生影响
 *
 * */
/////////////////////////////////////////////

/**
 * 交换两个整数的值，通过值传递
 * @param a 第一个整数
 * @param b 第二个整数
 */
void switcha(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

/**
 * 交换两个整数的值，通过指针传递
 * @param a 第一个整数的指针
 * @param b 第二个整数的指针
 */
void switchb(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * 交换两个整数的值，通过引用传递
 * @param a 第一个整数的引用
 * @param b 第二个整数的引用
 */
void switchc(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 111, y = 222;
    cout << "原始x=" << x << " 原始y=" << y << endl;
    switcha(x, y);
    cout << "x=" << x << " y=" << y << endl;
    // 通过指针调用switchs函数交换x和y的值
    switchb(&x, &y);
    cout << "x=" << x << " y=" << y << endl;
    // 通过引用调用switchs函数交换x和y的值
    switchc(x, y);
    cout << "x=" << x << " y=" << y << endl;
    return 0;
}
