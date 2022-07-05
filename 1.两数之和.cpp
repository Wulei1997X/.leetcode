// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 锟斤拷锟斤拷之锟斤拷
 */

// @lc code=start
//鏆村姏鐮磋В娉?

//两遍哈希表
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i;
        map<int, int> a;                  //建立map容器，存储数组，方便查找
        for (i = 0; i < nums.size(); i++) //插入元素
        {
            a.insert(pair(nums[i], i));
        }
        for (i = 0; i < nums.size(); i++)
        {
            // map.count()用于统计关键字的个数，map关键字不会重复所以最多只有一个
            if ((a.count(target - nums[i]) == 1) && (a[target - nums[i]] != i))
                //找到了对应的目标元素 并且不是本身
                return {i, a[target - nums[i]]};
        }
        return {};
    };
};
// time o(n)  space
//  @lc code=end
