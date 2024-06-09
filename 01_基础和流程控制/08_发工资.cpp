/*
 * @file 08_发工资.cpp
 * @author by xianyang 
 * @time on 24-6-8
 * @description 
 */

#include <iostream>
#include "my_tools.h"

using namespace std;

int main() {
    int total_money = 10000, num_prople = 20;
    for (int i = 1; i <= num_prople; i++) {
        double score = get_Num_Random(1, 10);
//        if (score >= 5) {
//            cout << "向员工" << i << "发放工资1000元," << "账户余额还剩余" << total_money - 1000 << "元" << endl;
//            total_money -= 1000;
//        }
        if (score < 5) {
            cout << "员工" << i << ",绩效分" << score << ",不发工资，下一位" << endl;
            continue;
        }
        cout << "向员工" << i << "发放工资1000元," << "账户余额还剩余" << total_money - 1000 << "元" << endl;
        total_money -= 1000;
        if (total_money == 0) {
            cout << "账户余额不足，停止发放工资," << "剩下的" << num_prople - i << "人下个月再来" << endl;
            break;
        }
    }

    return 0;
}
