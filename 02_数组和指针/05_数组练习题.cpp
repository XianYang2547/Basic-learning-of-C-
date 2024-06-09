#include <iostream>
#include <string>
#include "../01_基础和流程控制/my_tools.h"
using namespace std;

int main() {
    string names[] = {
            "Alice", "Bob", "Charlie", "David", "Emma",
            "Frank", "Grace", "Henry", "Isabel", "Jack",
            "Lily", "Michael", "Nora", "Oliver", "Penny",
            "Quinn", "Rachel", "Samuel", "Tina", "Victor"
    };
    string arr[2][2][5];
    for (auto &i : arr) {
        for (auto &j : i) {
            for (string &k : j) {
                int index = static_cast<int>(get_Num_Random(0, 19));
                k = names[index];
                cout << k << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
