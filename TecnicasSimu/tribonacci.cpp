class Solution {
    public:
        int climbStairs(int n) {
            if(n ==0 ) return n;
            if(n==1 || n==2) return 1;
        int prevv = 0;
        int prev = 1;
        int curr = 1;
        for(int i=3; i<=n; i++){
            int temp = curr;
            curr = prevv + prev + curr;
            prev = temp;
        }
        return curr;
        }

    };