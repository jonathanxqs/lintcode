class Solution {
public:    
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
    int threeSumClosest(vector<int> nums, int target) {
        // write your code here
        sort(nums.begin(),nums.end());
        int nums_l=nums.size();
        int i,j,k,n;
        int nu_arr[nums_l+3];
        int sum=0,sum1=0;
        i=0;

        for (auto s:nums){
        	i++;
        	nu_arr[i]=s;
        }

        for (i=1;i<=nums_l;i++){
        	for (j=i+1;j<=nums_l;j++)


        }
    }
};
