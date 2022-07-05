/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 鏈�澶у瓙鏁扮粍鍜?
 */

// @lc code=start
/*

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
        int sum = 0;
        int MAX = INT32_MIN; //保证MAX初始值足够小 sum用来记录当前值
        for (int num : nums)
        {
            sum += num;
            MAX = max(sum, MAX);
            if (sum < 0) //负增益舍弃
                sum = 0;
        }
        return MAX;
    }
};
// @lc code=end
// DP算法，time O(n)

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
