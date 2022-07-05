/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        nums1.erase(nums1.begin() + m, nums1.end());
        bool states;
        for (int i = 0; i < n; i++)
        {
            states = 1;
            for (int j = 0; j < m + n; j++)
            {
                if (nums2[i] <= nums1[j])
                {
                    states = 0;
                    nums1.insert(nums1.begin() + j, nums2[i]);
                    break;
                }
            }
            if (states)
            {
                nums1.push_back(nums2[i]);
            }
        }
    }
};
//使用插入法排序，time o(n2)
// @lc code=end
int main()
{
    vector<int> nums = {4, 0, 0, 0};
    vector<int> nums2 = {1, 2, 6, 7, 9};
    Solution().merge(nums, 1, nums2, 3);

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
    cout << endl;
    //   cout << a << endl;
    system("pause");
}
