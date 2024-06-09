/*
 * @file 07_for循环.cpp
 * @author by xianyang 
 * @time on 24-6-8
 * @description 
 */

#include <iostream>

using namespace std;

/* 主函数 */
int main() {
    /* 循环打印0到2的数字 */
    /*for (循环因子初始化语句：条件判断；循环因子变化语句){
     *      code
     * }
     * */
    for (int i = 0; i < 3; i++) {
        cout << i << endl;
    }

    /* 打印分隔线 */
    cout<<"------------------------"<<endl;

    /* 循环打印1到9的奇数 */
    for (int i = 1; i < 10; i+=2) {
        cout << i << endl;
    }
    cout<<"------------------------"<<endl;
    /* 初始化计数变量s为5 */
    int s=5;
    /* 无限循环，通过i的递增来打印数字，直到i等于s时终止循环 */
    for (int i = 0; ; i++) {
        cout<<i<<endl;
        /* 当i等于s时，退出循环 */
        if (i==s){
            break;
        }

    }

    /* 程序正常退出 */
    return 0;
}

