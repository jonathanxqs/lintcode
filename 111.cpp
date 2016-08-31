class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        std::vector<int> v(n+2,0);
        v[0]=1;
        v[1]=1;

        if (n<=1) return 1;

        for (int i=2;i<=n;i++) v[i]=v[i-1]+v[i-2];

        return v[n];
    }
};
