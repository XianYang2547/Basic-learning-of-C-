/*
 * @file 07_static关键字.cpp
 * @author by xianyang 
 * @time on 24-6-17
 * @description
 * static表示静态，可以修饰变量和函数，修饰变量可以延长它的生命周期到程序运行结束
 */

#include <iostream>

using namespace std;

int *adda(int a, int b) {
    static int sum = a + b; //使用static延长它的生命周期到程序运行结束
    //函数执行完，静态内存管理就把这些变量清空了
    return &sum;
}
int main() {
    int *sum = adda(1, 2);
    cout<<*sum<<endl;
    cout<<*sum+5<<endl;

    return 0;
}
