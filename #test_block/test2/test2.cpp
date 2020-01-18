#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    auto a(10);
    auto b('s');
    auto c("string");
    string d("string");
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
}