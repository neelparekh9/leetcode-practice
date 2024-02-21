#include <iostream>
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
    bool hasCycle(ListNode *head)
    {
        ListNode *pointer1 = head;
        ListNode *pointer2 = head;
        bool res = false;
        if (pointer1 == NULL)
        {
            return res;
        }
        if (pointer1->next == NULL)
        {
            return res;
        }
        while (pointer2 != NULL && pointer2->next != NULL)
        {
            pointer1 = pointer1->next;
            // pointer2 = pointer2->next->next;
            if (pointer2->next->next == NULL)
            {
                return false;
            }
            else
            {
                pointer2 = pointer2->next->next;
            }

            if (pointer1 == pointer2)
            {
                return true;
            }
        }
        return res;
    }
};