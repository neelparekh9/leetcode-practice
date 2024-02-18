#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int total_sum = (n * (n + 1)) / 2;
        int missing_num = total_sum;
        int i;

        for (i = 0; i < nums.size(); i++)
        {
            missing_num = missing_num - nums[i];
        }
        return missing_num;
    }
};