/*
 * @file 03_数组的遍历.cpp
 * @author by xianyang
 * @time on 24-6-8
 * @description
 */

#include <iostream>

using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    /*  for (元素类型 临时变量名：数组变量){
     *       临时变量存的就是一个个的元素}
     * */
    // old -->while  for
    int i=0;
    while (i<sizeof(arr)/ sizeof(arr[0])){
        cout << arr[i] << endl;
        i++;
    }

    for (int j : arr) {
        cout << j << endl;
    }
    return 0;
}
