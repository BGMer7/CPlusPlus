#include <iostream>
using namespace std;

class Line
{
public:
    Line(); //这是构造函数
    void setLength(double len);
    double getLength(void);

private:
    double length;
};

// 成员函数定义，包括构造函数
Line::Line(void)
{
    cout << "Object is being created" << endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main(){
    Line line;
    // set length
    line.setLength(0.6);
    cout << "length of line: " << line.getLength() << endl;
    return 0;
}