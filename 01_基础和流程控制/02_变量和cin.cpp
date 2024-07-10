/*
 * @file 02_变量和cin.cpp
 * @author by xianyang 
 * @time on 24-6-2
 * @description 
 */

#include <iostream>
#include <iomanip>
#include "string"

using namespace std;

int main() {
	//变量的声明
	// int a,b,c;
	int age;
	float height;
	char gender;
	string name;
	//变量的使用
	age = 8;
	height = 106.3;
	gender = 'm';
	name = "xiaobai";

	cout << age << ',' << height << ',' << gender << ',' << name << endl;
	age = 50;
	cout << age << endl;

	cout << "----------------------------------" << endl;
	double res = 1000.0 / 3.0;
	cout << res << endl;//333.333
	cout << fixed;//使浮点数以固定小数位数的形式显示,不显示为科学计数法
	cout << res << endl;//333.333333
	cout << setprecision(2);//控制显示的精度,显示小数点后多少位
	cout << res << endl;//333.33
	cout << "----------------------------------" << endl;
	//cin
	//数据类型 变量；
	//cin>>变量；
	string s;
	cout << "请输入字符串: ";
	cin >> s;
	cout << s << endl;
	return 0;
}
