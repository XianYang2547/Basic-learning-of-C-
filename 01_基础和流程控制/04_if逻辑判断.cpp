/*
 * @file 04_if逻辑判断.cpp
 * @author by xianyang 
 * @time on 24-6-4
 * @description 
 */

#include <iostream>

using namespace std;

int main() {
/*语法
 * if (要执行的判断，结果必须是bool){
 *    判断结果为true，会执行的代码  }
 * else if(要判断的其他条件){
 *    判断其他的条件成立执行...}
 * else{
 *      上面的判断结果为false，会执行的代码
 * }
 * */
    int money = 900;
    if (money >= 1000) {
        cout << "去洗脚" << endl;
    }
    else if(money>800){
        if (money>=900 &&money<1000){
            cout << "冲100洗脚" << endl;
        }
        else
            cout << "冲200洗脚" << endl;
    }
    else
        cout << "不去洗脚" << endl;
    return 0;
}
