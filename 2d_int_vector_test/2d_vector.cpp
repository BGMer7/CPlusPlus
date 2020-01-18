#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<vector<int>> vec;
    vec[0].push_back(10);
    cout << vec[0][0] <<endl;
}