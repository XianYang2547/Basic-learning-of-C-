/*
 * @file 05_枚举.cpp
 * @author by xianyang 
 * @time on 24-6-6
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    enum Color {
        RED,//默认是0
        GREEN,//默认是1
        BLUE//默认是2
    };
    int num;
    cin>>num;
    switch (num) {
        case RED://等于case 0
            cout<<"RED"<<endl;
            break;
        case GREEN://等于case 1
            cout<<"GREEN"<<endl;
            break;
        case BLUE://等于case 2
            cout<<"BLUE"<<endl;
            break;
        default:
            cout<<"default"<<endl;
    }

    return 0;
}
