/*
 * @file 03_继承父类带参构造.cpp
 * @author by xianyang 
 * @time on 24-6-24
 * @description 
 */

#include <iostream>

using namespace std;


class Father {
public:
    int age;
    int score;

    Father(); //父类的默认构造函数
    Father(int age, int score); //父类的带参构造函数
};

Father::Father() {
    cout << "Father()" << endl;

}

Father::Father(int age, int score) : age(age), score(score) {
    cout << "Father(int age, int score)" << endl;
}


class Son : public Father {
public:
    Son(); //类的默认构造函数
    Son(int height); //子类的带一个参数的构造函数
    Son(int age, int score, int height); //子类的带三个参数的构造函数
    int height;
};

Son::Son() {
    cout << "Son()" << endl;
}

// 在 Son 类的构造函数初始化列表中，通过 Father(age, score) 调用 Father 类的带参构造函数
Son::Son(int age, int score, int height) : Father(age, score), height(height) {
    cout << "Son(int age, int score, int height)" << endl;
}

Son::Son(int height) : height(height) {
    cout << "Son(int height)" << endl;
}

int main() {
    //创建对象
    Son sons = Son(18, 100, 180);
//    Father(int age, int score)
//    Son(int age, int score, int height)
    Son sons1 = Son();
//    Father()
//    Son()
    Son sons2 = Son(180);
//    Father()
//    Son(int height)
    return 0;
}
