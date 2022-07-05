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
        set<int> s;
        //通过set自动排序
        for (int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);
        set<int>::iterator it = s.end();
        if (s.size() < 3)
            return *(--it);
        --it;
        --it;
        return *(--it);
    }
};
//时间复杂度 n
// @lc code=end
