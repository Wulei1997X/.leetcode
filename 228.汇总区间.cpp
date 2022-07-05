/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区�?
 */

// @lc code=start
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        string left = to_string(nums[0]);
        string right = "";
        string str = ""; //元素
        vector<string> res;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] - nums[i] == 1)
                right = to_string(nums[i + 1]);
            else
            {

                if (right != "")
                    str = left + "->" + right;
                else
                    str = left;
                res.push_back(str);
                left = to_string(nums[i + 1]);

                right = "";
            }
        }
        if (nums[nums.size() - 1] - nums[nums.size() - 2] > 1)
        {
            str = to_string(nums[nums.size() - 1]);
            res.push_back(str);
        }

        return res;
    }
};
// @lc code=end
