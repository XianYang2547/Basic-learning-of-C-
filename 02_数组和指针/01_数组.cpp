/*
 * @file 01_数组.cpp
 * @author by xianyang 
 * @time on 24-6-8
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    /* <数据类型> <数组名称>[数组长度]
     * int arr[10]; int arr[10] = {1,2,3,4,5,6,7,8,9,10};
     * string arr[10];
     * */
    int arr[10];
    //在计算数组长度时，sizeof(arr) 返回的是数组占用的总字节数，
    //需要将其除以单个元素的字节数才能得到数组长度
    cout << "sizeof(arr) = " << sizeof(arr) / sizeof(arr[6]) << endl;
    arr[5] = 666;
    cout << arr[5] << endl;
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {1, 2, 3, 4, 5};

    float arr3[]={1.1,2.2,3.3};
    double arr4[]={1.1,2.2,4};
    char arr5[]={'a','b',1};
    string arr6[]={"hello","world"};
    bool arr7[]={true,false};
    cout << sizeof(arr6[0])<<endl;
    return 0;
}
