/*
 * @file 13_结构体指针.cpp
 * @author by xianyang 
 * @time on 24-6-14
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    struct Student {
        string name; /* 学生姓名 */
        int age; /* 学生年龄 */
        float score; /* 学生成绩 */
    };
    Student stu = {"bob", 15, 89.6};
    Student *p = &stu;
    p->score = 100;
    cout << p->score << endl;

    Student *student = new Student{"bob", 15, 89.6};
    cout << student->score << endl;
    delete student;

    return 0;
}
