/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, MAX = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum > MAX)
                    MAX = sum;
            }
        }
        return MAX;
    }
};
// @lc code=end
//暴力遍历，记录最大值，初始最大值设置为第一个数。。。。。超时了
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
