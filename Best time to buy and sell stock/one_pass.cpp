#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buy, sell, diff, max_diff, i;
        max_diff = 0;
        buy = 0;
        if (prices.size() == 0 || prices.size() == 1)
        {
            return max_diff;
        }

        for (i = 1; i < prices.size(); i++)
        {
            sell = i;
            diff = prices[sell] - prices[buy];
            if (prices[i] < prices[buy])
            {
                buy = i;
                continue;
            }
            else
            {
                if (diff > max_diff)
                {
                    max_diff = diff;
                }
            }
        }
        return max_diff;
    }
};