class Solution
{
public:
    int tribonacci(int n)
    {
        vector<int> memo(n + 1, 0);
        memo[0] = 0;
        memo[1] = 1;
        memo[2] = 1;
        if (n <= 2)
        {
            return memo[n];
        }
        else
        {

            for (int i = 3; i < n + 1; i++)
            {
                memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
            }
            return memo[n];
        }
    }
};