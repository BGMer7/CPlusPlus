#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a_int;
    int *p_int;
    short *p_short;
    long long *p_long_long;
    cout << sizeof(a_int) << endl;
    cout << sizeof(p_int) << endl;
    cout << sizeof(*p_short) << endl;
    cout << sizeof(*p_long_long) << endl;
}