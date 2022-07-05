/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> res;
        int i = digits.size() - 1;
        digits[i]++;
        while ((digits[i] == 10) && (i != 0))
        {
            digits[i--] = 0;
            digits[i]++;
        }
        if (digits[0] == 10)
        {
            res.push_back(1);
            for (int j = 0; j < digits.size(); j++)
                res.push_back(0); //尾插法
            return res;
        }
        res = digits;
        return res;
    }
};
//分两种情况，一 首位需要进位（需要扩充数组），二首位不需要进位
// @lc code=end
int main()
{
    vector<int> nums = {9};
    vector<int> a = Solution().plusOne(nums);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << "  ";
    cout << endl;
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
    cout << endl;
    //   cout << a << endl;
    system("pause");
}
