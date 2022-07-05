/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
 */

// @lc code=start
class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int time = 0, sum = 0;
        for (int i = 0; i < timeSeries.size() - 1; i++) //不产生重叠
        {
            if (timeSeries[i + 1] - timeSeries[i] > duration)
                time = duration;
            else //时间重叠
                time = timeSeries[i + 1] - timeSeries[i];
            sum += time;
        }
        return sum + duration; //最后一次攻击持续时间是完整的
    }
};
// @lc code=end
