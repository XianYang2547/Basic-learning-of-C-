/*
 * @file 04_多维数组.cpp
 * @author by xianyang
 * @time on 24-6-9
 * @description
 */

#include <iostream>

using namespace std;

int main() {
    int arr[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };
    // 遍历
    //使用引用传递可以避免在每次迭代中对arr的行进行复制，而是直接操作原始数据
    for (auto &i : arr){
        for (int j:i){
            cout << j << " ";
        }
        cout<<endl;
    }
    return 0;
}