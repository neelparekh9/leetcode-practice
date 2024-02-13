#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashmap;
        vector<int> res;
        if (nums.size() == 0 || nums.size() == 1)
        {
            return res;
        }
        int curr;
        for (curr = 0; curr < nums.size(); curr++)
        {
            int diff = target - nums[curr];
            if (hashmap.find(diff) != hashmap.end())
            {
                res.push_back(hashmap[diff]);
                res.push_back(curr);

                return res;
            }
            else
            {
                hashmap.insert({nums[curr], curr});
            }
        }
        return res;
    }
};