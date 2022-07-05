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
        int MAX = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            for (int j = i+1; j< prices.size() ; j++)
            {
                MAX=max(MAX,prices[j]-prices[i]);
            }
        }
        return MAX;
    }
};
// @lc code=end
//暴力遍历，超时
int main()
{
    vector<int> nums = {9, 8, 11, 15};
    int a = Solution().maxProfit(nums);

    cout << endl;
    cout << a << endl;
    system("pause");
}