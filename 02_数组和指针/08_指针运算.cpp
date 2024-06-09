/*
 * @file 08_指针运算.cpp
 * @author by xianyang 
 * @time on 24-6-9
 * @description 
 */

#include <iostream>

using namespace std;

#include <iostream>

int main() {
    // 初始化一个整型数组，包含1到5五个元素
    int arr[] = {1, 2, 3, 4, 5};
    // 定义一个整型指针arr_p，并将其指向数组arr的第一个元素
    int *arr_p = arr;////数组arr记录的是个地址,这里就不用&取地址了
    //arr_p记录了数组中0号元素的地址
    // 输出数组第一个元素的地址
    std::cout << arr_p << std::endl;

    // 输出数组第一个元素的值
    std::cout << *arr << std::endl;

    // 依次输出数组第一个元素之后的每个元素的值
    std::cout << *arr + 1 << std::endl;
    std::cout << *arr + 2 << std::endl;
    std::cout << *arr + 3 << std::endl;

    return 0;
}

