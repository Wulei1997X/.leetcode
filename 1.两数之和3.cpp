// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <iostream>
#include <map>
//#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] ����֮��
 */
// @lc code=start
// once hash table 一边插入一边判断
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i;
        map<int, int> a;
        for (i = 0; i < nums.size(); i++)
        {

            if (a.count(target - nums[i]) > 0)
                return {i, a[target - nums[i]]};
            else
                a.insert(pair(nums[i], i));
        }
        return {};
    };
};
// time o(n) space
