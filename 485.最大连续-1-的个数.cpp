/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-04 18:46:13
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-04 19:17:37
 * @FilePath: \.leetcode\485.最大连续-1-的个数.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续 1 的个数
 */

// @lc code=start
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int result = 0;
        int left = 0, right = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                left = i; // 记录左边的1的指针
                //防止数组越界  第一个条件写在&&左边，&&左边==0就不会执行右边了
                while (i < nums.size() && nums[i])
                    i++;
                right = i; //记录右边的1的指针
            }
            result = max(result, right - left);
            //保留最大
        }
        return result;
    }
};
// @lc code=end
