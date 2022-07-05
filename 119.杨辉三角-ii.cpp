// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem119.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ret{1}, cur{1};
        for (int i = 1; i <= rowIndex; i++)
        {
            ret.push_back(1);           //跳转至下一行
            for (int j = 1; j < i; j++) //修改行内元素
            {
                ret[j] = cur[j] + cur[j - 1];
            }
            cur = ret;
        }
        return ret;
    }
};
// @lc code=end
