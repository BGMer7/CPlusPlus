#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int j = 2;
    i *= j + 2; //赋值语句的优先级低于加号运算符
    cout << i;
    int a(9);
    cout << a;
}