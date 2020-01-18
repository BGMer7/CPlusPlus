#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> ID_Name;

    // 使用{}赋值是从c++11开始的，因此编译器版本过低时会报错，如visual studio 2012
    ID_Name = {
        {2015, "Jim"},
        {2016, "Tom"},
        {2017, "Bob"},
        {2018, "Helen"}};

    ID_Name[2015] = "Jerry";
    ID_Name[2019] = "Jackson";
    cout << ID_Name[2015] << endl;
    cout << ID_Name[2019] << endl;
    //if exist then insert, else cover
    ID_Name.insert({2020, "Bob"});
    cout << ID_Name[2020] << endl;
}