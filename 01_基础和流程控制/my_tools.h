#include <random> // 使用尖括号来确保正确地包含标准库头文件
#include <stdexcept> // 用于抛出异常

#ifndef XY_C_PRO_RANDS_H
#define XY_C_PRO_RANDS_H

// 生成一个随机数,可以返回整数或者小数
double get_Num_Random(double min, double max, bool is_float = false) {
    // 确保参数合法性
    if (min > max || min == max) {
        throw std::invalid_argument("min must be less than or equal to max");
    }
    static std::mt19937 gen(std::random_device{}());
    if (!is_float) {
        std::uniform_int_distribution<int> int_dis(static_cast<int>(min), static_cast<int>(max));
        return int_dis(gen);
    } else {
        std::uniform_real_distribution<double> float_dis(min, max);
        return float_dis(gen);
    }
}

#endif //XY_C_PRO_RANDS_H
