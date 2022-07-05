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
        cout << "key  " << i->first << "  value  " << i->second << endl; //可以使用类似于数组的形式访问元素
    }
    cout << endl;
}
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        map<int, int> a;
        a[target] = -1; //插入元素的值定义为 -1
        for (int i = 0; i < nums.size(); i++)
        {
            // a.insert(pair(nums[i], i));
            a[nums[i]] = i;
        }
        PrintMap(a);
        map<int, int>::const_iterator pos = a.find(target);
        if (a.size() == nums.size()) //容器的大小==数组大小 说明插入了相同的元素
        {
            cout << 111 << endl;
            return (*pos).second;
        }

        else if (((*(++pos)).first) == nums[0])
        {

            cout << 222 << endl;
            return 0;
        }
        else
        {
            pos--;
            return (*(--pos)).second + 1;
        }
    }
};
// @lc code=end
//强行使用map容器，不可取，时间复杂度o(n)
int main()
{
    vector<int> nums = {1, 3, 4, 5, 6};
    int a = Solution().searchInsert(nums, 7);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "  ";
    cout << endl;
    cout << a << endl;
    system("pause");
}
