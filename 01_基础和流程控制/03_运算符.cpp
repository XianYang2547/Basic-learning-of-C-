/*
 * @file 03_运算符.cpp
 * @author by xianyang 
 * @time on 24-6-2
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
    /*算术运算符:+ - * / %取余
     * 自增自减:
     * a=2,b=++a-->a=3,b=3 ++a先把a+1，再赋值给b
     * a=2,b=a++-->a=3,b=2 a++先赋值，a再加1
     * a=2,b=--a-->a=1,b=1 --a先把a-1，再赋值给b
     * a=2,b=a---->a=1,b=2 a--先给b赋值，然后a再减1
    赋值运算符 =  +=  -=  *=  /=  %=
    比较运算符 == != < > <= >= (布尔结果)结果为0或1
    逻辑运算符
     * !  非  !a   python中的！取反
     * && 与 a&&b  python中的and
     * || a或 ||b  python中的or
    位运算符
    三元运算符
     具有bool结果的表达式？值1：值2；
     为true，则提供值1的结果
     为false，则提供值2的结果

     */
    int num1, num2;
    num1 = 10;
    num2 = 8;
    string res = num1 > num2 ? "num1>num2" : "num1<num2";
    //num1 > num2 ? "num1>num2" : "num1<num2" 要用一个变量去接收返回的值
    cout << res << endl;
    return 0;
}
