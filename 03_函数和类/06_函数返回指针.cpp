/*
 * @file 06_函数返回指针.cpp
 * @author by xianyang 
 * @time on 24-6-17
 * @description 
 */

#include <iostream>

using namespace std;
//返回指针，在返回值类型和函数名之间+*

int *adda(int a, int b) {
    int sum = a + b;
    //函数执行完，静态内存管理就把这些变量清空了
    return &sum;
}

int *addb(int a, int b) {
    int *p = new int;
    *p = a + b;
    return p;
}

int main() {
    // 进程已结束，退出代码为 139 (interrupted by signal 11:SIGSEGV)
//    int *s = adda(5, 6);
//    cout << *s << endl;
    int *sum = addb(5, 6);
    cout << *sum << endl;
    delete sum;


    return 0;
}
