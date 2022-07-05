/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-04 19:42:47
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-04 19:50:15
 * @FilePath: \.leetcode\561.数组拆分-i.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%A
 */
/*
 * @lc app=leetcode.cn id=561 lang=cpp
 *
 * [561] 数组拆分 I
 */

// @lc code=start
class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int result = 0;
        for (int i = 0; i < nums.size(); i = i + 2)
        {
            result += min(nums[i], nums[i + 1]);
        }
        return result;
    }
};
//将其排好序再分组就是最好的分组，使得每组相差最小，所以min和就是最大
// @lc code=end
