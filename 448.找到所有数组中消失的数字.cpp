/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-04 18:17:27
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-04 18:45:11
 * @FilePath: \.leetcode\448.找到所有数组中消失的数字.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result;
        unordered_set<int> s(nums.begin(), nums.end());
        //直接在容器里找没有的数字，不存在就是要返回的数字
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(i + 1) == s.end())
                result.push_back(i + 1);
        }
        return result;
    }
};
// @lc code=end
