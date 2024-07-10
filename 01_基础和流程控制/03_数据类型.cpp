/*
 * @file 03_数据类型.cpp
 * @author by xianyang 
 * @time on 24-6-2
 * @description 
 */

#include <iostream>
#include <limits>
using namespace std;
/*数值和非数值string
整型int、 short、 long、 long long char bool以及无符号版的
浮点型 float、double、long double*/
int main() {
    /////////////////整形
    /*short短整形
            int整形
    long长整形
    longlong长长整形---------------取值范围依次增加

    无符号和有符号数字
    有符号 signed 允许负数
    eg:signed int num=-1
    unsigned无符号
    eg: unsigned int 2  只能存正数
    等同于 u_int 2*/
    short age = 2;
//    unsigned num = -25;//不能正常显示，超范围了
    signed int num = -25;
    long num1 = 20;
    long long num3 = 22;

    cout << num << endl;
    cout << sizeof(age) << endl;//2
    cout << sizeof(num) << endl;//4
    cout << sizeof(num1) << endl;//8 for linux 64位
    cout << sizeof(num3) << endl;//8
    cout << "********************" << endl;
    /*//////////////浮点型（全部都是有符号的）有效位数的区别
     * 浮点数使用double更加
     float
     double
     long double*/
    float float_num = 3.14;//单精度浮点数
    double float_num1 = 6.28;//双精度浮点数
    long double float_num2 = 12.56;//长精度浮点数
    cout << sizeof(float_num) << endl;//4
    cout << sizeof(float_num1) << endl;//8
    cout << sizeof(float_num2) << endl;//16

    cout << "********************" << endl;
    /* 字符型(无符号和有符号数字)
      a=97 A=65
      b=98*/
    char ch = 98;
    cout << ch << endl;//b
    cout << ch + 1 << endl;//99
    cout << "********************" << endl;
    /* //////////////字符串
     char c语言风格

     string c++风格*/
    string s1 = "c++ string";
    cout << s1 <<",size"<< size(s1) << endl;
    // 字符串的拼接：都是字符串用+，非字符串用to_string（）转为字符串
    string name = "小白";
    string gender = "男";
    age = 10;
    string sss = name + ",性别" + gender + ",今年" + to_string(age) + "岁了";
    cout << sss << endl;
    cout << "********************" << endl;
    /*///////////////////布尔型
     * true false
     * */
    bool flag1 = true;
    bool flag2 = false;
    cout<<flag1<<" and "<<flag2<<endl;
    //无类型 void


    cout << "type: \t\t" << "************size**************"<< endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;

    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;

    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;

    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;

    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;

    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;

    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;

    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;

    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;

    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;

    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;

    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************"<< endl;
    return 0;
}
