/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
//暴力遍历，超时。
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; (j < i + k + 1) && (j < nums.size()); j++)
            {
                // cout<<nums[i]<<"   "<<nums[j]<<endl;
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};
// @lc code=end
