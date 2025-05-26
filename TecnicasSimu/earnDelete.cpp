#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        map<int, int> dict;
        for (int i = 0; i < nums.size(); i++)
        {
            dict[nums[i]]++;
        }
        vector<int> dp(dict.size() + 1, 0);
        int i = 1;
        int aux = 0;
        for (auto &par : dict)
        {
            if (i == 1)
            {
                dp[i] = (par.first * par.second);
                i++;
                aux = par.first;
            }
            else
            {
                if (abs(par.first - aux) != 1)
                {
                    dp[i] = dp[i - 1] + (par.first * par.second);
                    aux = par.first;
                }
                else
                {
                    dp[i] = max(dp[i - 1], dp[i - 2] + (par.first * par.second));
                    aux = par.first;
                }
                i++;
            }
        }
        return dp[dp.size() - 1];
    }
};