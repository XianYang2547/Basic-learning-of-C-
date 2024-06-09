/*
 * @file 02_十次机会猜数字.cpp
 * @author by xianyang 
 * @time on 24-6-8
 * @description 
 */

#include <iostream>
#include "../01_基础和流程控制/my_tools.h"
using namespace std;

int main() {
    // 生成一个1到10之间的随机数
    double num = get_Num_Random(1, 10);
    cout << num << endl;

    // 请求用户输入10个数字
    cout << "请输入10个数字" << endl;
    int arr[10];
    int inputs;

    // 循环读取用户输入的10个数字并存储到数组arr中
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cin >> inputs;
        arr[i] = inputs;
    }
    /*在范围-based for 循环中，i 是一个值的拷贝，
     * 对 i 的修改不会影响到原始数组中的元素。
        正确的做法是使用引用*/
//    for (int & i : arr) {
//        cin >> inputs;
//        i = inputs;
//    }
    // 计数变量，用于记录数组中与随机数相同的数字的数量
    int count = 0;

    // 遍历数组，统计与随机数相同的数字的数量
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (num == arr[i]) {
            count += 1;
        }
    }
//    for (int i : arr) {
//        if (num == i) {
//            count += 1;
//        }
//    }
    // 输出与随机数相同的数字的数量
    cout << "你猜对了" << count << "个" << endl;
    return 0;
}

// 从low到high范围内生成一个随机数
// 返回值: 生成的随机数
double get_Num_Random(double low, double high) {
    // 实现细节省略
}

