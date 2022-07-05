// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem118.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include <vector>
#include <iostream>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ret;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row(i + 1, 1); //定义元素全是1
            for (int j = 1; j < i; j++)
            {
                row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
            ret.push_back(row);
        }
        return ret;
    }
};
// @lc code=end
//先用枚举法定义第一个为{1}、第二个为{1,1}，然后递推， time(1/2n2)