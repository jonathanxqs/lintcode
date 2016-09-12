
class Solution {
public:
    /**
     * @param A: An integer array.
     * @param target: An integer.
     */
    int MinAdjustmentCost(vector<int> A, int target) {
        // write your code here
        int n = A.size();
        int f[n + 1][101];

        //init 
        for (int i = 0; i <= n ; ++i)
            for (int j = 0; j <=100; ++j)
                f[i][j] = INT_MAX;
        for (int i = 0; i <= 100; ++i)
            f[0][i] = 0;

        //dp
        for (int i = 1; i <=n; ++i)
            for (int  j = 0; j <= 100;++j)
                if (f[i-1][j] != INT_MAX)
                for (int k = max(0,j-target); k <= min(100,j+target); ++k)
                    if (abs(j-k) <= target)
                    if (f[i][k] > f[i-1][j] + abs(A[i-1]-k))
                        f[i][k] = f[i-1][j] + abs(A[i-1]-k);  

        //return
        int ans = INT_MAX;
        for (int i = 0; i <= 100; ++i)
            if (f[n][i] < ans)
                ans = f[n][i];
        return ans; 
    }
};

// another solution 
// class Solution {
//     const int MaxNum = 101;
// public:
//     /**
//      * @param A: An integer array.
//      * @param target: An integer.
//      */
//     int MinAdjustmentCost(vector<int> A, int target)
//     {
//         int n = A.size();
//         vector<vector<int>> dp(n, vector<int>(MaxNum, INT_MAX));

//         for(int i = 0; i < MaxNum; i ++)
//             dp[0][i] =  abs(i - A[0]);

//         for(int i = 1; i < n; i ++)
//         {
//             for(int k = 0; k < MaxNum; k ++)
//             {
//                 int cost = abs(k - A[i]);
//                 for(int p = -target; p <= target; p ++)
//                 {
//                     int prev = k + p;
//                     prev = min(prev, MaxNum - 1);
//                     prev = max(prev, 0);
                    
//                     dp[i][k] = min(dp[i][k], cost + dp[i - 1][prev]);
//                 }
//             }
//         }

//         return *min_element(dp.back().begin(), dp.back().end());
//     }
// };