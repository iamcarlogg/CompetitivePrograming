#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        int aux;
        cin >> aux;
        coins[i] = aux;
    }
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, INT_MAX));
    dp[0][0] = 0;
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < x + 1; j++)
        {
            if (coins[i] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - coins[i]] + 1);
            }
        }
    cout << dp[n][x];
}