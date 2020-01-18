#include <iostream>
using namespace std;
int main()
{
    const int num = 10;
    // num++;表达式必须是可修改的左值
    cout << num << endl;
}