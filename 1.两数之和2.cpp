// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <iostream>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] ����֮��
 */
// @lc code=start
//暴力破解法
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i, j;
        for (i = 0; i < nums.size() - 1; i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {

                if (target - nums[i] == nums[j])
                    return {i, j};
            }
        }
        return {};
    };
};
//time o(n2) space 
