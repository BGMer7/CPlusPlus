#include <iostream>

using namespace std;

class Parent
{
public:
    // 父类虚函数必须要有 virtual 关键字
    virtual void fun()
    {
        cout << "父类" << endl;
    }
};

class Child : public Parent
{
public:
    // 子类有没有 virtual 关键字都可以
    void fun()
    {
        cout << "子类" << endl;
    }
};

int main()
{
    Parent *p = NULL; // 创建一个父类的指针
    Parent parent;
    Child child;
    p = &parent; // 指向父类的对象
    p->fun();    // 执行的是父类的 fun() 函数
    p = &child;  // 指向子类的对象
    p->fun();    // 执行的是子类的 fun() 函数
    return 0;
}