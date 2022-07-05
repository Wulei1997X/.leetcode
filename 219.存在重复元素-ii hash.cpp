/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
#include <map>
#include <iostream>
#include <vector>
using namespace std;
void PrintMap(map<int, int> &m)
{
    for (map<int, int>::const_iterator i = m.begin(); i != m.end(); i++)
    {
        cout << "key  " << i->first << "  value  " << i->second << endl; //ĺ?äťĽä˝żç¨çąťäźźäşć°çťçĺ˝˘ĺźč?żéŽĺç´ 
    }
    cout << endl;
}
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            if (a.count(nums[i]) > 0) //判断是不是已经存在了
            {
                if (i - a[nums[i]] <= k) //存在且符合要求，返回TRUE
                    return true;
                a[nums[i]] = i; //不符合，更新下标，继续遍历
            }
            a.insert(pair(nums[i], i)); //插入元素
        }
        return false; //遍历完毕，没有符合条件，返回FALSE
    }
};
// @lc code=end
//使用hash table key表示数组的值，val表示数组的下标，遍历数组，遇到相同的key就更新对应的val.
/*
int main()
{
    vector<int> nums = {1, 2, 3, 4, 1, 1, 1};
    int a = Solution().containsNearbyDuplicate(nums, 0);
    cout << endl;
    cout << "a" << a << endl;
    system("pause");
}