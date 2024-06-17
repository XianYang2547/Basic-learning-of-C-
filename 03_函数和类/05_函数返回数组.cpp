/*
 * @file 05_函数返回数组.cpp
 * @author by xianyang 
 * @time on 24-6-17
 * @description
 * 数组对象本身是第一个元素的地址，返回数组本质上就是返回指针
 */

#include <iostream>

using namespace std;
//不能直接返回
//int *getArray() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    return arr;
//}
int *getArray() {
    static int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}
int *getArray1() {
    int *arrs=new int[5]{1, 2, 3, 4, 5};;
    return arrs;
}

int main() {
    int *arr=getArray();
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int *arrs=getArray1();
    for (int i = 0; i < 5; i++){
        cout << arrs[i] << " ";
    }
    delete []arrs;
    return 0;
}
