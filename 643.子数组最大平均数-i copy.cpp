/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-05 16:47:39
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-05 17:02:47
 * @FilePath: \.leetcode\643.子数组最大平均数-i copy.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {

        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += nums[i]; //计算最开始的窗户大小
        int res = sum;
        for (int j = k; j < nums.size(); j++)
        {
            sum = sum + nums[j] - nums[j - k]; //减一个，加一个实现滑窗
            res = max(res, sum);               //保留最大值
        }
        return res / (double)k;
    }
};
//滑窗，滑好了
// @lc code=end
