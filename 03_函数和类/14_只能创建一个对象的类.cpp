/*
 * @file 14_只能创建一个对象的类.cpp
 * @author by xianyang 
 * @time on 24-6-22
 * @description 
 */

#include <iostream>

class Singleton {
private:
    // 静态私有成员变量，用于保存唯一实例(静态私有指针变量)
    static Singleton* instance;

    // 私有构造函数，禁止外部直接实例化对象
    Singleton() {
        std::cout << "Singleton instance created." << std::endl;
    }

public:
    // 静态方法，用于获取唯一实例,通过类名直接调用返回类型为 指向 Singleton 类型对象的指针
    static Singleton* getInstance() {
        // 如果实例不存在，则创建新的实例
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    // 删除拷贝构造函数和赋值操作符，确保不能通过拷贝方式创建新的实例
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // 析构函数，释放实例占用的资源
    ~Singleton() {
        std::cout << "Singleton instance destroyed." << std::endl;
    }

    // 示例方法，用于展示单例类的功能
    static void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }
};

// 静态成员变量初始化
Singleton* Singleton::instance = nullptr;

int main() {
    // 获取单例实例
    Singleton* singletonInstance1 = Singleton::getInstance();
    singletonInstance1->showMessage();

    // 尝试创建第二个实例
    // Singleton* singletonInstance2 = new Singleton(); // 编译错误，构造函数是私有的

    return 0;
}
