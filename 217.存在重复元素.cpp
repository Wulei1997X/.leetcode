/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] �����ظ�Ԫ��
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
//ͨ��set<int> �Զ�����  ���ظ�  ������  �����飬�ȽϷ�ʱ
int main()
{
    vector<int> nums = {1, 2, 3};
    bool a = Solution().containsDuplicate(nums);
    cout << a << endl;
    system("pause");
}