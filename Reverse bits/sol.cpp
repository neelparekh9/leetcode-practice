#include <iostream>
using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t rev = 0;
        int cnt = 31;
        while (cnt >= 0)
        {
            int temp = n & 1;
            rev = rev << 1;
            rev = rev + temp;
            n = n >> 1;
            cnt--;
        }
        return rev;
    }
};