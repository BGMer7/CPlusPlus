#include <map>
#include <iostream>
using namespace std;
//from the offical guidance in https://en.cppreference.com/w/cpp/container/map/deduction_guides
int main()
{
    // std::map m1 = {{"foo", 1}, {"bar", 2}}; // Error: braced-init-list has no type;
    // cannot deduce pair<Key, T> from
    // {"foo", 1} or {"bar", 2}
    map<string, int> m1 = {std::pair{"hello", 0}, {"world", 1}};
    map<string, int> m2 = {m1.begin(), m1.end()};
    cout << m1.size() << endl;
}