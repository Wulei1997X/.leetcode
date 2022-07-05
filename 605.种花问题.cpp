/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-04 20:39:03
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-04 21:35:06
 * @FilePath: \.leetcode\605.种花问题.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int length = flowerbed.size();
        for (int i = 0; i < length; i++)
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == length - 1 || flowerbed[i + 1] == 0))
            {
                n--;
                //把花种上
                flowerbed[i] = 1;
            }
            if (n <= 0)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
