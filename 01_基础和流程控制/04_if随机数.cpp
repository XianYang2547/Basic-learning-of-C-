/*
 * @file 04_if随机数.cpp
 * @author by xianyang 
 * @time on 24-6-5
 * @description 
 */

#include <iostream>
#include <random>
#include <vector>

using namespace std;

// 随机数引擎作为静态局部变量重用，避免重复初始化
static std::mt19937 gen(random_device{}());//random_device{}和random_device rd;在功能上是等效的


auto get_Num_Random(int min, int max) {
    uniform_int_distribution<> dis(min, max);//整数
//    std::uniform_real_distribution<double> dis(-9.0, 60.0);//浮点数
    auto randnum = dis(gen);
    return randnum;
}

//vector<string> 中的 string 表示这是一个存储字符串对象的向量
auto get_read_or_black_Random(vector<string> s) {
    uniform_int_distribution<> dis(0, 1);//整数
    auto index = dis(gen); // 生成0或1
    return s[index];
}

auto get_HHMF_Random(string color) {
    vector<string> hf = {"红桃", "方块"};
    vector<string> hm = {"黑桃", "梅花"};
    uniform_int_distribution<> dis(0, 1);//整数
    auto index = dis(gen); // 生成0或1
    if (color == "红色")
    {
        return hf[0];
    }
    else{
        return hm[1];
    }

}

int main() {
    auto num = get_Num_Random(5, 5);//getRandom(-100,100)
    cout << num << endl;
    int n;
    string c, h;
    cin >> n;
    if (num == n) {
        cout << "数字猜对了" << endl;
        auto color = get_read_or_black_Random({"红色", "黑色"});
        cout << color << endl;
        cin >> c;
        if (color == c) {
            cout << "颜色猜对了" << endl;
            auto hhmf = get_HHMF_Random(color);
            cout << hhmf << endl;
            cin >> h;
            if (hhmf == h) {
                cout << "花色猜对了" << endl;
            } else {
                cout << "花色猜错了" << endl;
            }
        } else {
            cout << "颜色猜错了" << endl;
        }
    } else {
        cout << "数字猜错了" << endl;
    }
    return 0;
}

/*新版
 *
 *
 * */
