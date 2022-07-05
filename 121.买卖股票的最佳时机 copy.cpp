/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxpro = 0;
        int minpri = INT_MAX; //设置为最大整数保证第一次比较被赋值
        for (int i = 0; i < prices.size(); i++)
        {
            //走一步看一步，记录前i天最小的
            minpri = min(minpri, prices[i]);
            maxpro = max(maxpro, prices[i] - minpri);
            //保存到i天最大的，如果今天更大，则更新。
        }
        return maxpro;
    }
};
// @lc code=end
//动态规划，走一步看一步
int main()
{
    vector<int> nums = {9, 8, 11, 15};
    int a = Solution().maxProfit(nums);

    cout << endl;
    cout << a << endl;
    system("pause");
}