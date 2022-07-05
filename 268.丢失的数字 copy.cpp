/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
#include <string.h>
#include <set>
#include <vector>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++)
            res += i - nums[i];
        return res;
    }
};
//数学方法，如果没有丢失的总和-丢失的总和=丢失的数字
// @lc code=end
