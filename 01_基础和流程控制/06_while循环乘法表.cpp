/*
 * @file 06_while循环乘法表.cpp
 * @author by xianyang 
 * @time on 24-6-7
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    int row = 1, column = 1;
    while (row < 10) {
        while (column <= row) {
            cout << column << "*" << row << "=" << row * column << "\t";
            column++;
        }
        cout<<endl;
        column = 1;
        row++;
    }
    return 0;
}
