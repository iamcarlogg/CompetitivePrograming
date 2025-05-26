#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (obstacleGrid[0][0] == 1)
                {
                    return 0;
                }
                else if (m == 1 && obstacleGrid[0][j] == 1)
                {
                    return 0;
                }
                else
                {
                    if (i == 0)
                    {
                        if (obstacleGrid[i][j] == 1)
                        {
                            dp[i][j] = 0;
                        }
                        continue;
                    }
                    else
                    {
                        if (j == 0)
                        {
                            if (obstacleGrid[i][j] == 1)
                            {
                                dp[i][j] = 0;
                            }
                            continue;
                        }
                        else
                        {
                            if (obstacleGrid[i][j] == 1)
                            {
                                dp[i][j] = 0;
                                continue;
                            }
                            else
                            {
                                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                            }
                        }
                    }
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};