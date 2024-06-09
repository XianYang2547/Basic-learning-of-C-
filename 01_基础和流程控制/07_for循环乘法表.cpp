/*
 * @file 07_for循环乘法表.cpp
 * @author by xianyang 
 * @time on 24-6-8
 * @description 
 */

#include <iostream>
#include "my_tools.h"
using namespace std;

int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
    auto s=get_Num_Random(1,10, false);
    cout<<s<<endl;
    double num;//double可以容纳小数和整数
    cin>>num;
    for (int i = 0; ; i++) {
        if(num==s){
            cout<<"恭喜你猜对了"<<endl;
            cout<<"你一共猜了"<<i+1<<"次"<<endl;
            break;
        }else if(num>s){
            cout<<"猜大了"<<endl;
            cin>>num;
        }else{
            cout<<"猜小了"<<endl;
            cin>>num;
        }
    }
    return 0;
}
