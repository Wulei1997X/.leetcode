/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include <iostream>
#include <map>
#include <vector>
using namespace std;
// @lc code=start
//与26题类似
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int j=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=val)
            nums[j++]=nums[i];
        }
        return j;
    }
};
// @lc code=end
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 3, 5, 6, 6};
    int a = Solution().removeElement(nums, 3);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
      cout <<endl;  
    cout << a << endl;
    system("pause");
}
