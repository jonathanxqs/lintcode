class Solution {
public:
    /**
     * @param A: An array of non-negative integers.
     * return: The maximum amount of money you can rob tonight
     */
    long long houseRobber(vector<int> A) {
        // write your code here
        int i,j,k,n = A.size();

        std::vector<long long> totTilN(n+5,0);  // 0->0 1->0 2->the first ,sub0
        for (i=2;i<2+n;i++)
            totTilN[i]=max(totTilN[i-2]+A[i-2],totTilN[i-1]);

        return totTilN[n+1];
    }
};