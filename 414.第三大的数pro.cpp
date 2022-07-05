/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-04 17:28:05
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-04 17:33:19
 * @FilePath: \.leetcode\414.第三大的数pro.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end()); //快速插入方法
        return s.size() < 3 ? *(--s.end()) : *(-- -- --s.end());
        //连减三次
    }
};
//时间复杂度 n
// @lc code=end
