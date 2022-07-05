// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] ����֮��
 */

// @lc code=start
//暴力破解�?

//�����ϣ��
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i;
        map<int, int> a;                  //����map�������洢���飬�������
        for (i = 0; i < nums.size(); i++) //����Ԫ��
        {
            a.insert(pair(nums[i], i));
        }
        for (i = 0; i < nums.size(); i++)
        {
            // map.count()����ͳ�ƹؼ��ֵĸ�����map�ؼ��ֲ����ظ��������ֻ��һ��
            if ((a.count(target - nums[i]) == 1) && (a[target - nums[i]] != i))
                //�ҵ��˶�Ӧ��Ŀ��Ԫ�� ���Ҳ��Ǳ���
                return {i, a[target - nums[i]]};
        }
        return {};
    };
};
// time o(n)  space
//  @lc code=end
