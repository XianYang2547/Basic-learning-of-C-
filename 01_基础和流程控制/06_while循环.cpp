/*
 * @file 06_while循环.cpp
 * @author by xianyang 
 * @time on 24-6-7
 * @description 
 */

#include <iostream>
#include "my_tools.h"

using namespace std;

int main() {
    /*
     * while(条件表达式)
     * {code;
     * }*
     * while循环条件表达式为真，则循环体中的代码块会一直执行下去，直到条件表达式为假。*/
    bool istrue = true;
    int num = 0;
    while (istrue) {
        cout << num << endl;
        num += 1;
        if (num == 5) {
            istrue = false;
        }

    }
    int x = 1, sum = 0;
    while (x <= 100) {
        sum += x;
        x++;
    }
    cout << sum << endl;

    cout << "请输入一个数字:" << endl;
    auto num_random = get_Num_Random(1, 100);
    cout << "随机数是:" << num_random << endl;
    int i = 0, s = 0;
    int input_num;
    while (i < 10) {
        cin >> input_num;
        s++;
        if (input_num == num_random) {
            cout << "猜对了" << endl;
            cout << "一共猜了" << s << "次" << endl;
            break;
        } else if (input_num > num_random) {
            cout << "猜大了" << endl;
        } else {
            cout << "猜小了" << endl;
        }
        i++;
    }

    return 0;
}
