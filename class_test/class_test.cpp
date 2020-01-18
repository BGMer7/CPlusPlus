#include<iostream>
using namespace std;
int main()
{
    class A
    {
        char a[3];

    public:
        virtual void fun1(){};
        virtual void fun2(){};
    };
    cout << sizeof(A) << endl;
}