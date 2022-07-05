/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-04 19:59:38
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-04 20:24:26
 * @FilePath: \.leetcode\566.重塑矩阵.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        int m = nums.size();
        int n = nums[0].size();
        if (m * n != r * c)
            return nums;
        vector<vector<int>> ans(r, vector<int>(c));
        //多维数组定义方法
        for (int x = 0; x < m * n; ++x)
            ans[x / c][x % c] = nums[x / n][x % n];
        return ans;
    }
};
// @lc code=end
