/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double res = 0;
        double result = -INT_MAX;
        if (k == 1)
        {
            sort(nums.begin(), nums.end());
            return nums[nums.size() - 1];
        }
        for (int i = 0; i <= nums.size() - k; i++)
        {
            res = 0;
            for (int j = i; j < i + k; j++)
                res += nums[j];
            //cout << "res  " << res << endl;
            result = max(result, res / (double)k);
        }
        return result;
    }
};
//滑窗，没滑好，超时
// @lc code=end
