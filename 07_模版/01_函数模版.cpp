/*
 * @file 01_函数模版.cpp
 * @author by xianyang 
 * @time on 24-7-6
 * @description 
 */

#include <iostream>
#include "string"

using namespace std;

// 定义模板函数 test
template<typename T1, typename T2>//传的参数是2个类型
void test(T1 value1, T2 value2) {
	// 在模板函数内部使用模板参数 T
	cout << value1 + value2 << endl;
}

template<typename T>//重载 传的参数是一个类型
auto test(T value1, T value2) {
	// 在模板函数内部使用模板参数 T
	return value1 + value2;
}

int main() {
	// 调用 test 函数，并传入不同类型的参数
	test(10, 3.14);
	test(string("Hello"), 's');
	// 调用 test 函数，并传入相同类型的参数
	auto res = test(3.104, 2.26);
	cout << res << endl;
//	auto res1 = test<int>(3, 2.26);
//	cout << res1 << endl;
	return 0;
}