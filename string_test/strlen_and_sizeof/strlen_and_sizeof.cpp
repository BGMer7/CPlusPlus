#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char sc[10000] = "iamsosad";
    string s("iamsosad");
    string *p = &s;
    cout << sizeof(s) << " " << strlen(sc) << endl;
    cout << sc;
    return 0;
}