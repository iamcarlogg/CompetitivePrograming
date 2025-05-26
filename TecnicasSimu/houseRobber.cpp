#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int rob(vector<int> &arr)
    {
        vector<int> dp(arr.size() + 1, 0);
        for (int i = 1; i < dp.size(); i++)
        {
            if (i-2<0)
            {
                dp[i] = arr[i - 1];
            }
            else
            {
                dp[i] = max(dp[i - 1], dp[i - 2] + arr[i - 1]);
            }
            
        }
        return dp[dp.size() - 1];
        

    }
};