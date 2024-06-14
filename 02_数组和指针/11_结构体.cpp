/*
 * @file 11_结构体.cpp
 * @author by xianyang 
 * @time on 24-6-14
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    //声明结构体
    /*struct 名字 {
     * 成员1类型  成员1名称;
     * 成员2类型  成员2名称
     */
    struct Student {
        string name="666";
        int age;
        float score;
    };
    Student stu; //结构体变量
    stu.score = 100;
    stu={"xiaobai",18,100};
    cout << stu.score << endl;

    Student stu2={"xiaohong",15,10};

    return 0;
}