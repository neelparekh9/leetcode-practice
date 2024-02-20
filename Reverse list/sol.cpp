#include <iostream>
#include <vector>
using namespace std;
// Definition for singly-linked list.
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
    ListNode *reverseList(ListNode *head)
    {
        vector<int> arr;
        ListNode *temp = head;

        while (temp != NULL)
        {
            arr.push_back(temp->val);
            // cout<<temp->val<<endl;
            temp = temp->next;
        }
        ListNode *temp2 = head;
        while (temp2 != NULL)
        {
            temp2->val = arr.back();
            arr.pop_back();
            temp2 = temp2->next;
        }
        return head;
    }
};