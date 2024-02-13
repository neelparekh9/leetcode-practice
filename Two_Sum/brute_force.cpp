#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        if (nums.size() == 0 || nums.size() == 1)
        {
            return res;
        }
        int i, j;
        for (i = 0; i < nums.size() - 1; i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};