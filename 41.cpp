class Solution {
public:    
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> nums) {
        // write your code here

        int n=nums.size();
        if (n==0) return 0;
        std::vector<int> sum(n+10,0);
        std::vector<int > minTillN(n+10,0);
        int i,j,k,rt;


        for (i=0;i<n;i++) sum[i+1]=sum[i]+nums[i];
        	rt=sum[1];

        for (i=0;i<n;i++) {
        	if (sum[i]<minTillN[i]) minTillN[i+1]=sum[i];
        	else minTillN[i+1]=minTillN[i];

        	rt=max(rt,sum[i+1]-minTillN[i]);

        }

        return rt;

    }
};
