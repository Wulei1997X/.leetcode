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
        map<int, int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            a.insert(pair(nums[i], i));
            if (a.size() < (i + 1))
                return true;
        }
        return false;
    }
};
// @lc code=end
//通过map容器，如果有重复的KEY那么map的长度就不会增加，一旦发现长度不变了就退出来
//省时
int main()
{
    vector<int> nums = {1, 2, 3};
    bool a = Solution().containsDuplicate(nums);
    cout << a << endl;
    system("pause");
}