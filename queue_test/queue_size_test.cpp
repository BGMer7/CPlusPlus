#include <queue>
#include <iostream>
using namespace std;

main()
{
    queue<string> que;
    que.push("first");
    que.push("second");
    que.push("third");
    que.push("fourth");

    cout << que.size() << endl;

}
