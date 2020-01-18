#include<iostream>

void swap(int& a, int& b){
    int t =a;
    a=b;
    b=t;
}

int main(){

int a=2,b=4;
swap(a,b);
std::cout << a;
}