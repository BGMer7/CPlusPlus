#include <queue>
#include <map>
#include <iostream>
using namespace std;

main()
{
    queue<string> que;
    que.push("first");
    que.push("second");
    que.push("third");
    cout << que.front() << endl;

    string zero = "zero";
    zero = que.front();
    cout << que.front() << endl;
}