/*
 * @file 02_变量和cin.cpp
 * @author by xianyang 
 * @time on 24-6-2
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    //变量的声明
    // int a,b,c;
    int age;
    float height;
    char gender;
    string name;
    //变量的使用
    age = 8;
    height = 106.3;
    gender = 'm';
    name = "xiaobai";

    cout << age << ',' << height << ',' << gender << ',' << name << endl;
    age = 50;
    cout << age << endl;

    //cin
    //数据类型 变量；
    //cin>>变量；
    string s;
    cout << "请输入字符串: ";
    cin >> s;
    cout << s << endl;
    return 0;
}
