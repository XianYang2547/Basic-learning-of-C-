/*
 * @file 14_函数.cpp
 * @author by xianyang 
 * @time on 24-6-16
 * @description 
 */

#include <iostream>

using namespace std;

int maxx(int a, int b, int c) {
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

//无返回值
void test(int a, int b, int c) {
    int res = maxx(a, b, c);
    cout << res << endl;
}

//接受两个int 返回一个结构体，结构体有2个成员，成员1最小值，成员2最大值
struct MinMax {
    int min;
    int max;
};

MinMax minmax(int a, int b) {
    MinMax res{};
    res.max = a > b ? a : b;
    res.min = a < b ? a : b;
    return res;
}

int main() {
    /*
     * 返回值类型 函数名称 （参数列表）{
        code
        返回值
    }*/
    int res = maxx(5, 6, 0);
    cout << res << endl;
    test(6, 9, 1);
    MinMax ress = minmax(100, 520);
    cout << ress.max << endl;
    cout << ress.min << endl;

    return 0;
}
