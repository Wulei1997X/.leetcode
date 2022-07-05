/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
#include <map>
#include <vector>
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());  //先进性排序，那么下标为 n/2的那个就是众数
        return nums[nums.size() / 2];
    }
};
// @lc code=end
