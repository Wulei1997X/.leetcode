/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-04 16:36:23
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-04 17:01:35
 * @FilePath: \.leetcode\283.移动零.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int pos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
                swap(nums[pos++], nums[i]);

/*             for (int j = 0; j < nums.size(); j++)
                cout << nums[j] << " ";
            cout << endl; */
            //遇到不是0的元素就和前面是0的元素交换
        }
    }
};
// @lc code=end
