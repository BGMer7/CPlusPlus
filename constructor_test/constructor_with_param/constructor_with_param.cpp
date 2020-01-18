#include <iostream>

using namespace std;

class Line
{
public:
    Line(double len); // 这是构造函数
    void setLength(double len);
    double getLength(void);

private:
    double length;
};

//成员函数定义，包括构造函数
Line::Line(double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

class printNum
{
public:
    printNum();
    void print()
    {
        cout << num << endl;
    }

private:
    int num = 10;
};

printNum::printNum(){
    cout << "start printing" << endl;
}

// 程序的主函数
int main()
{
    Line line(0.6);

    // 获取默认设置的长度
    cout << "Length of line : " << line.getLength() << endl;
    // 再次设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    printNum p;
    p.print();
    return 0;
}