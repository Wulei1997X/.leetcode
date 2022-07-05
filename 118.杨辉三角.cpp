// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem118.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include <vector>
#include <iostream>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<int> temp;
        vector<vector<int>> res;
        res.push_back({1});
        if (numRows > 1)
            res.push_back({1, 1});
        for (int i = 2; i < numRows; i++) //直接从3开始
        {
            int k = 0;
            temp.push_back(1);
            for (int j = 1; j < i; j++)
            {
                temp.push_back(res[i - 1][k] + res[i - 1][k + 1]);
                k++;
            }
            temp.push_back(1);

            for (int q = 0; q < temp.size(); q++) //直接从3开始
                cout << temp[q] << "  ";
            res.push_back(temp);
            temp.clear();
            cout << endl;
        }
        return res;
    }
};
// @lc code=end
//先用枚举法定义第一个为{1}、第二个为{1,1}，然后递推， time(1/2n2)