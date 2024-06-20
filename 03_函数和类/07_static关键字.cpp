/*
 * @file 07_static关键字.cpp
 * @author by xianyang 
 * @time on 24-6-17
 * @description
 * static表示静态，可以修饰变量和函数，修饰变量可以延长它的生命周期到程序运行结束
 */

#include <iostream>

using namespace std;
//在函数中
int *adda(int a, int b) {//int * 表示 adda 函数返回的是一个指向 int 类型的指针
    static int sum = a + b; //使用static延长它的生命周期到程序运行结束
    //函数执行完，静态内存管理就把这些变量清空了
    return &sum;
}
//在类中   静态的通过类名就可以调，不用创建对象实例化啥的
class Test {
public:
    static int a;//静态成员变量的声明和初始化是分开的，声明在类定义中，初始化在类定义外。
    //静态成员函数
//    跟python中的@classmethod
//            def sex（）差不多
    static void addb() {
        cout<<666<<endl;
    }
};
//静态变量赋值,使用类名::说明他是属于这个类的
int Test::a = 1;



int main() {
    int *sum = adda(1, 2);
    cout<<*sum<<endl;
    int *s = adda(10, 2); //再次调用，sum 这个静态变量不会重新初始化，只会保持上一次的值
    cout<<*s<<endl;
    //    cout<<*sum+5<<endl;
    cout<<"--------------------------------------"<<endl;
    /*类中static成员是，属于类的，而不是某个对象,不同对象去调用它调用的是同一个地址，
     * 一个对象把他改了，其他对象再调用时，它也就变了*/
    Test obj1;
    cout<<obj1.a<<endl;
    cout<<&obj1.a<<endl;
    obj1.a=333;
    Test obj2;
    cout<<obj2.a<<endl;
    cout<<&obj2.a<<endl;
    //也可以用类名来访问
    cout<<Test::a<<endl;
    cout<<"--------------------------------------"<<endl;
    obj1.addb();
    Test::addb();
    (&obj1)->addb();
    Test *p = &obj1;
    p->addb();
    return 0;
}
