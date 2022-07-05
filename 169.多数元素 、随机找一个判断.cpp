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
        while (1)
        {
            int random = nums[rand() % nums.size()];
            //由于占大多数，随便找一个看看是不是，不是就再找。理论上时间复杂度无穷
            //实际上第一次不是概率1/2，第二次1/4，第三次1/8...，所以时间复杂度应该是o(N)
            int count = 0;
            for (int num : nums)
            {
                if (random == num)
                    count++;
                if (count > nums.size() / 2)
                    return random;
            }
        }
    }
};
// @lc code=end
