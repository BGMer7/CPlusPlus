#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

main()
{
    int n = 3;
    ListNode *dummy = new ListNode(-1), *fast = dummy, *low = dummy;
    while (n--)
    {
        fast = fast->next;
    }

    while(fast ->next != NULL){
        fast = fast->next;
        low = low -> next;
    }

}