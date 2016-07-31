class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int len=nums.size();
        if(len==1){
            return nums[0];
        }
        int cnt=1;
        int index_res=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[index_res]){
                cnt++;
            }else{
                cnt--;
            }

            if(cnt==0){
                cnt=1;
                index_res=i;
            }
        }

        return nums[index_res];
    }
};