/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
/*把整个问题分为几个子问题:
1 以nums[0],结尾的连续子数组的最大和
2 以nums[1],结尾的连续子数组的最大和
3 以nums[2],结尾的连续子数组的最大和 ...

dp[i]：表示以 nums[i] 结尾 的 连续 子数组的最大和
dp[i]=max{nums[i],dp[i−1]+nums[i]}   dp[i - 1] > 0是正增益，
如果是负数，那么dp[i]=nums[i]
*/
#include <iostream>
#include <map>
#include <vector>

using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int pre = 0;
        int res = nums[0];
        for (int num : nums)
        {
            pre = max(pre + num, num);
            res = max(res, pre);
        }
        return res;
    }
};
// @lc code=end
//动态规划为题，关联300题，time O(n)
int main()
{
    vector<int> nums = {-1, -3, -4, -5, -6};
    int a = Solution().maxSubArray(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
    cout << endl;
    cout << a << endl;
    system("pause");
}
