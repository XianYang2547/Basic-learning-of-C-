/*
 * @file 02_父类指针指向子类对象.cpp
 * @author by xianyang 
 * @time on 24-6-23
 * @description 
 */

#include <iostream>

using namespace std;

class Father {
public:
    int age;
    int score;
};

class Son : public Father {
public:
    int age;
    int score;
};


int main() {
    //创建对象
    Father bababa;
    Son sons;
    //创建指针
    Father *baba;//父类指针
    baba = &bababa; //父类指针指向父类对象-------常规的
    Son *son;//子类指针
    son = &sons;//子类指针指向子类对象-------常规的

    //变更指向
    baba = &sons;//父类指针指向子类对象
    //son = &baba;//子类指针指向父类地址   一般行不通
     /*子类指针指向父类对象,子类继承自父类，
      * 子类对象中可能包含父类对象没有的成员和方法，指针读的时候，读完父类内容后，
      * 指针还有剩余空间，就读不到了或者读取的是莫名其妙的区域
      *
      *
      * */
    son = (Son*)&baba;
    return 0;
}
