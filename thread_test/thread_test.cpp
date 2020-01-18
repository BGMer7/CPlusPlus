#include<thread>
#include<iostream>
#include<mutex>

using namespace std;

void say_hello(){
    cout << "hello" << endl;
}

void say_sorry(){
    cout << "sorry" << endl;
}

main(){
    thread t1(say_hello);
    cout << t1.joinable() << endl;
    t1.join();
    cout << t1.joinable() << endl;

    thread t2(say_sorry);
    cout << t2.joinable() << endl;
    t2.join();
    cout << t2.joinable() << endl;

    cout << "this is main function. " << endl;  
    
    
}