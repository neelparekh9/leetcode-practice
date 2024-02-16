#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> hashmap;
        int i;
        if (nums.size() == 0 || nums.size() == 1)
        {
            return false;
        }
        for (i = 0; i < nums.size(); i++)
        {
            if (hashmap.find(nums[i]) != hashmap.end())
            {
                return true;
            }
            else
            {
                hashmap.insert({nums[i], i});
            }
        }
        return false;
    }
};