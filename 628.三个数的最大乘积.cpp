/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        if (nums[length - 1] <= 0 || nums[0] >= 0) //全为正或者全为负数情况
            return nums[length - 1] * nums[length - 2] * nums[length - 3];
        else //有正有负
            return max(nums[length - 1] * nums[length - 2] * nums[length - 3], nums[0] * nums[1] * nums[length - 1]);
    }
};
// @lc code=end
