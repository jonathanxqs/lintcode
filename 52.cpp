class Solution {
public:
    /**
     * @param nums: An array of integers
     * @return: An array of integers that's next permuation
     */
    vector<int> nextPermutation(vector<int> &nums) {
        int i = nums.size() - 2;  
        while (i >= 0 && nums[i] >= nums[i + 1]) {  
            i--;  
        }  
        if (i < 0) {  
            reverse(nums.begin(), nums.end() - 1);  
        }  
        else {  
            int j = i + 2;  
            while (j < nums.size() && nums[j] > nums[i]) {  
                j++;  
            }  
            j--;  
              
            nums[i] ^= nums[j];  
            nums[j] ^= nums[i];  
            nums[i] ^= nums[j];  
              
            reverse(nums.begin() + i + 1, nums.end() - 1);  
        }  
        return nums;
    }
    private:  
    void reverse(vector<int>::iterator i1, vector<int>::iterator i2) {  
        while (i1 < i2) {  
            *i1 ^= *i2;  
            *i2 ^= *i1;  
            *i1 ^= *i2;  
       
            i1++;  
            i2--;  
        }  
    }
};