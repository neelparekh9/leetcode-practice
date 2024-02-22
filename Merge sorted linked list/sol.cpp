#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *list3 = NULL;
        ListNode *temp;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val == list2->val)
            {
                temp->val = list1->val;
            }
        }
    }
};