/*
 * @Author: wulei hj.wulei@qq.com
 * @Date: 2022-07-05 17:25:49
 * @LastEditors: wulei hj.wulei@qq.com
 * @LastEditTime: 2022-07-05 19:42:05
 * @FilePath: \.leetcode\661.å›¾ç‰‡å¹³æ»‘å™?.cpp
 * @Description: è¿™æ˜¯é»˜è?¤è?¾ç½®,è¯·è?¾ç½®`customMade`, æ‰“å¼€koroFileHeaderæŸ¥çœ‹é…ç½® è¿›è?Œè?¾ç½®: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] å›¾ç‰‡å¹³æ»‘å™?
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> res(m, vector<int>(n));
        vector<vector<int>> a(m + 2, vector<int>(n + 2));
        a.clear();
        a.push_back(vector<int>(n + 2, 0));
        for (int i = 0; i < m; i++)
        {
            img[i].insert(img[i].begin(), 0);

            img[i].push_back({0});
            a.push_back(img[i]);
        }
        a.push_back(vector<int>(n + 2, 0));
        // return a;
        cout << "m: " << m << " n: " << n << endl;
        for (int i = 0; i < m * n; i++)
        {
            int x = i / n + 1;
            int y = i % n + 1;
            int average = 9;
            if (x - 1 == 0 && y - 1 == 0 ||
                x - 1 == 0 && y - 1 == n - 1 ||
                x - 1 == m - 1 && y - 1 == 0 ||
                x - 1 == m - 1 && y - 1 == n - 1)
                average = 4;
            else if (x - 1 == 0 || x - 1 == m - 1 || y - 1 == 0 || y - 1 == n - 1)
                average = 6;
            cout << " pos:" << x - 1 << "," << y - 1 << "  Average: " << average << endl;
            res[x - 1][y - 1] = (a[x - 1][y - 1] + a[x - 1][y] + a[x - 1][y + 1] + a[x][y - 1] + a[x][y] + a[x][y + 1] + a[x + 1][y - 1] + a[x + 1][y] + a[x + 1][y + 1]) / average;
        }

        return res;
    }
};
// @lc code=end
