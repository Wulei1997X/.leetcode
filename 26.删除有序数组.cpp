/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
//第一次创建map表，每个key就是所需的结果
//第二次循环将map key赋值给 nums
#include <iostream>
#include <map>
#include <vector>
using namespace std;
void PrintMap(map<int, int> &m)
{
    for (map<int, int>::const_iterator i = m.begin(); i != m.end(); i++)
    {
        cout << "key  " << i->first << "  value  " << i->second << endl; //可以使用类似于数组的形式访问元素
    }
    cout << endl;
}
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        map<int, int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            a[nums[i]] = i;
        }
        // PrintMap(a);
       int j=0;
            for (map<int, int>::const_iterator it = a.begin(); it != a.end(); it++)
            {
                nums[j++] = it->first;
                cout << "key  " << it->first << "  value  " << it->second << endl;
                cout << "nums" << j << "  =  " << it->first << endl;
            }
        return a.size();
    };
};
// time o(n)
// @lc code=end

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 3, 5, 6, 6};
    int a = Solution().removeDuplicates(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
    cout << a << endl;
    system("pause");
}