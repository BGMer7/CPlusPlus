#include <iostream>
#include <list>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (!l1)
            return l2;
        else if (!l2)
            return l1;
        else if (l1->val > l2->val)
        {
        }
    }
};

std::ostream &operator<<(std::ostream &ostr, const std::list<int> &list)
{
    for (auto &i : list)
    {
        ostr << " " << i;
    }
    return ostr;
}

int main()
{
    list<int> list1{1, 4, 6, 8};
    list<int> list2{2, 3, 5, 7};
    list1.merge(list2);//offical instance
    cout << list1 << endl;
}