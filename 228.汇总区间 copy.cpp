/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 姹囨€诲尯闂?
 */

// @lc code=start
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ans;
        int left = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i + 1 == nums.size() || nums[i] + 1 != nums[i + 1])
            {
                ans.push_back(to_string(nums[left]) + (left == i ? "" : "->" + to_string(nums[i])));
                left = i + 1;
            }
        }

        return ans;
    }
};
// @lc code=end
