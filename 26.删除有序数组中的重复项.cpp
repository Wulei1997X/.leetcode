/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
//遍历数组，如果发现与下位元素不一致就将此元素值赋给 结果。
#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[count++] = nums[i];
            }
        }
        return count;
    };
};
// time o(n)
// @lc code=end

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 3, 5, 6, 6, 7};
    int a = Solution().removeDuplicates(nums);
    for (int i = 0; i < a; i++)
        cout << nums[i] << "  ";
    cout << endl;
    cout << a << endl;
    system("pause");
}