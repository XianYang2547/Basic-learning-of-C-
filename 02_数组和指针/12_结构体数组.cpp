/*
 * @file 12_结构体数组.cpp
 * @author by xianyang 
 * @time on 24-6-14
 * @description 
 */

#include <iostream>

using namespace std;

/* 定义学生结构体，包含姓名、年龄和成绩 */
struct Student {
    string name; /* 学生姓名 */
    int age; /* 学生年龄 */
    float score; /* 学生成绩 */
};

int main() {
    /* 初始化学生数组，包含三个学生 */
    Student stu[3] = {
        {"张三", 50, 5.3},
        {"李四", 60, 6.3},
        {"王五", 70, 7.3}
    };

    /* 遍历学生数组，打印每个学生的姓名、年龄和成绩 */
    for (int i = 0; i < 3; i++) {
        cout << "姓名：" << stu[i].name << endl;
        cout << "年龄：" << stu[i].age << endl;
        cout << "成绩：" << stu[i].score << endl;
    }

    /* 初始化另一个学生数组，包含两个学生 */
    Student stu2[2] = {
        {"张三", 50, 5.3},
        {"李四", 60, 6.3}
    };

    return 0;
}
