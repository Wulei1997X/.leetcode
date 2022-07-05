/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
#include <iostream>
#include <map>
#include <vector>
using namespace std;
void PrintMap(map<int, int> &m)
{
    for (map<int, int>::const_iterator i = m.begin(); i != m.end(); i++)
    {
        cout << "key  " << i->first << "  value  " << i->second << endl; //�?以使用类似于数组的形式�?�问元素
    }
    cout << endl;
}
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (target > nums[nums.size() - 1])
            return nums.size();
        if (target < nums[0])
            return 0;
        int i = (nums.size() - 1) / 2;
        int head = 0, end = nums.size() - 1;
        while (nums[i] != target)
        {
            if (nums[i] > target)
                end = i - 1;
            if (nums[i] < target)
                head = i + 1;
            i = (head + end) / 2;
            if ((nums[i] < target) && (nums[i + 1] > target))
            {
                i++;
                break;
            }
        }
        return i;
    }
};
// @lc code=end
// binary-search o(log2 n)
int main()
{
    vector<int> nums = {1, 3, 4, 6};
    int a = Solution().searchInsert(nums, 5);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
    cout << endl;
    cout << a << endl;
    system("pause");
}
