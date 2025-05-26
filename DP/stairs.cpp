class Solution {
    public:
        int climbStairs(int n) {
            vector<int> result(n + 1, -1);
            return climb(n, result);
        }
    
    private:
        int climb(int N, vector<int>& result) {
            if (result[N] == -1) {
                if (N <= 1)
                    result[N] = 1; // ¡Nota! Aquí debe ser 1, no N
                else
                    result[N] = climb(N - 1, result) + climb(N - 2, result);
            }
            return result[N];
        }
    };