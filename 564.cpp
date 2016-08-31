class Solution {
public:
    /**
     * @param nums an integer array and all positive numbers, no duplicates
     * @param target an integer
     * @return an integer
     */
    std::vector<int> dp_ans;
    
    std::vector<int> v;

    int backPackVI(vector<int>& nums, int target) {
        // Write your code here
        
        sort(nums.begin(),nums.end());

        if (nums.size()==0) return 0;

        int n=nums.size(),i,j,k;
        dp_ans.assign(target+5,0);
        dp_ans[0]=1;

        for (i=1;i<=target;i++){
        	for (auto const s:nums){
        		if (i-s<0) break;
        		dp_ans[i] +=dp_ans[i-s];
        	}
        }


        return dp_ans[target];

    }
};