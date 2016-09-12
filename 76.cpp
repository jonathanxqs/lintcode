class Solution {
public:
    /**
     * @param nums: The integer array
     * @return: The length of LIS (longest increasing subsequence)
     */
    int longestIncreasingSubsequence(vector<int> nums) {
        // write your code here
        int n=nums.size();
        int i,j,k,l,rt_max=0;
        std::vector<int> dp(n+1,1);

        //dp
        for (i=1;i<n;i++){
        	for (j=0;j<i;j++)
        		if (nums[j]<nums[i]) dp[i]=max(dp[i],dp[j]+1);

        	// cout<<dp[i]<<"	";
        }

        //find rt
        for (i=0;i<n;i++){
        	rt_max=max(rt_max,dp[i]);
        }

        return rt_max;



    }

};

  // Total Runtime: 10 ms
