/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
#include <string.h>
#include <set>
#include <vector>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        //无序容器，方便查找
        unordered_set<int> s;
        int length = nums.size();
        //插入元素
        for (int i = 0; i < length; ++i)
            s.insert(nums[i]);
        //挨个找是否存在空缺
        for (int i = 0; i < length; ++i)
        {
            // if (s.find(i) == s.end())
            if (!s.count(i))
                return i;
        }
        return length;
    }
};
// @lc code=end
