#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream inFile("happy.txt");
    string str;
    cout << "tsy" << endl;
    cout << endl;
    while (inFile.good())
    {
        getline(inFile, str); //该方法来自<string>
        cout << str << endl;
    }
    cin.get();
    return 0;
}