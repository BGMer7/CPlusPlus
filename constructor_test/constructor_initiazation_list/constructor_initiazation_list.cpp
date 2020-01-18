#include <iostream>
using namespace std;

class line // base class
{
public:
    int max_len = 10;
    int min_len = 0;

private:
    string color;
};

class line_b // derived class
{
public:
    int max_len;
    int min_len;
    void print_max_min()
    {
        cout << "max length is: " << max_len << "\n";
        cout << "min length is: " << min_len << "\n";
    }
    //构造函数初始化列表
    line_b() : max_len(100), min_len(0)
    {
        print_max_min();
    }

private:
    string color = "black";
    //不确定是什么原因，但是构造函数内部不能使用直接赋值，只能复制赋值
    //我觉得可能是string s("hello")这种类型的语法编译器会以为是函数
};

class line_y
{
public:
    line_y()
    {
        int max_len = 100;
        int min_len = 0;
    } // 构造函数内部赋值

private:
    string color = "yellow";
};

int main()
{
    line_b lb;
}