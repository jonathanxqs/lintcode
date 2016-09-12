
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
                for (int k = 0; k <= 100; ++k)
                    if (abs(j-k) <= target)
                    if (f[i][k] > f[i-1][j] + abs(A[i-1]-k))
                        f[i][k] = f[i-1][j] + abs(A[i-1]-k);  

        int ans = INT_MAX;
        for (int i = 0; i <= 100; ++i)
            if (f[n][i] < ans)
                ans = f[n][i];
        return ans; 
    }
};