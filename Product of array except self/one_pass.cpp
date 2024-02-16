#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        if (nums.size() == 0 || nums.size() == 1)
        {
            return nums;
        }
        int temp = 1;
        vector<int> arr(nums.size());
        int i;
        // fill(arr.begin(),arr.end(),1);
        arr[0] = 1;
        for (i = 0; i < nums.size() - 1; i++)
        {
            // temp = temp * nums[i];
            arr[i + 1] = arr[i] * nums[i];
        }
        temp = 1;
        for (i = nums.size() - 1; i > 0; i--)
        {
            temp = temp * nums[i];
            arr[i - 1] = arr[i - 1] * temp;
        }
        return arr;
    }
};