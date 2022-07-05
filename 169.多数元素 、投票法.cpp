/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
#include <map>
#include <vector>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

            int count = 0;
            for (int num : nums)
            {
                if (random == num)
                    count++;
                if (count > nums.size() / 2)
                    return random;
            }
    }
};
// @lc code=end
