#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int numsize = nums.size();
        int ca;
        int cb;

        for (int i = 0; numsize > i; i++)
        {
            ca = nums[i];
            for (int j = 0; numsize > j; j++)
            {
                cb = nums[j];
                if (cb + ca == target && (i != j))
                {
                    return {i, j};
                }
                else
                {
                    continue;
                }
            }
        };
        return {};
    }
};
