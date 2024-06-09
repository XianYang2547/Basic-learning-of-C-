/*
 * @file 01_if.cpp
 * @author by xianyang 
 * @time on 24-6-6
 * @description 
 */

#include <iostream>
#include "my_tools.h"
using namespace std;


int main() {
    auto num = get_Num_Random(1, 10);
    cout << num << endl;
    int n;
    cin >> n;
    if (num == n) {
        string color = get_Num_Random(0, 1) ? "红色" : "黑色";
        cout << color << endl;
        string colors;
        cin >> colors;

        if (colors == "红色") {
            string suit = get_Num_Random(0, 1) ? "红桃" : "方块";
            cout << suit << endl;
            string suits;
            cin >> suits;
            if (suits == suit) {
                cout << "恭喜你，你赢了" << endl;
            } else {
                cout << "很遗憾，你输了" << endl;
            }
        } else if (colors == "黑色") {
            string suit = get_Num_Random(0, 1) ? "梅花" : "黑桃";
            string suits;
            cin >> suits;
            if (suits == suit) {
                cout << "恭喜你，你赢了" << endl;
            } else {
                cout << "很遗憾，你输了" << endl;
            }
        }

    } else { cout << "很遗憾，你输了" << endl; }

    return 0;
}
