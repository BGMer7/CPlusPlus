#include <stack>
#include <iostream>
using namespace std;

main()
{
    stack<int> intStack;
    int origin = 1;
    intStack.push(origin);
    int top = intStack.top();
    cout << top << endl;

    stack<char> charStack;
    cout << charStack.top() << endl;
}