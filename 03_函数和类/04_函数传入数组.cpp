/*
 * @file 03_ 函数传入数组.cpp
 * @author by xianyang 
 * @time on 24-6-17
 * @description 
 */

#include <iostream>

using namespace std;


void func(int *arr) //arr里面都是int的
{
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//推荐
void fun(int arr[],int length){
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    //              arr均被看做指针
    /* void func(int arr[])
     * void func(int arr[10])
     * void func(int *arr)
     * */

    int arr[10] = {1, 2, 3, 4, 5};
    func(arr);
    fun(arr,5);
    return 0;
}
