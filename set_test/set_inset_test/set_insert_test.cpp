#include <set>
#include <iostream>
using namespace std;
int main()
{
    int left = 0;
    int right = 10;
    set<int> test_set;
    test_set.insert(left);
    test_set.insert(right);
    test_set.insert(10);
    cout << test_set.size() << endl;
}