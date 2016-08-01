class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer indicate the value of maximum difference between two
     *          Subarrays
     */
    int maxDiffSubArrays(vector<int> nums) {
        // write your code here
        int n=nums.size(),i,j,k,f[n+10];
        f[0]=0;
        i=0;
        for (auto s:nums){
        	i++;
        	f[i]=f[i-1]+s;
        }

        int min_f= INT_MAX,max_f= -INT_MAX;

        for (i=0;i<=n;i++){
        	min_f=min(min_f,f[i]);
        	max_f=max(max_f,f[i]);
        }

        return abs(max_f-min_f);
    }
};
