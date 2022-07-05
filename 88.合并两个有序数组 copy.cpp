/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        nums1.erase(nums1.begin() + m, nums1.end()); //清除后面多余的元素
        for (int i = 0; i < n; i++)
            nums1.push_back(nums2[i]);    //尾插法插入新的元素
        sort(nums1.begin(), nums1.end()); //排序
    }
};
// @lc code=end
//使用sort函数对vector排序,timr o(n)
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
