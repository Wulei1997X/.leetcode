/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
};
// @lc code=end
//通过set<int> 自动有序  无重复  的容器  代码简介，比较费时
int main()
{
    vector<int> nums = {1, 2, 3};
    bool a = Solution().containsDuplicate(nums);
    cout << a << endl;
    system("pause");
}