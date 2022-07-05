/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组�?
 */

// @lc code=start
/*

 */
#include <iostream>
#include <map>
#include <vector>

using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int MAX = INT32_MIN; //��֤MAX��ʼֵ�㹻С sum������¼��ǰֵ
        for (int num : nums)
        {
            sum += num;
            MAX = max(sum, MAX);
            if (sum < 0) //����������
                sum = 0;
        }
        return MAX;
    }
};
// @lc code=end
// DP�㷨��time O(n)

int main()
{
    vector<int> nums = {-1, -3, -4, -5, -6};
    int a = Solution().maxSubArray(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
    cout << endl;
    cout << a << endl;
    system("pause");
}
