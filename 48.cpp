struct Candidate{
    int val;
    int count;
    Candidate(int x = 0, int y = 0): val(x), count(y){}
};

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @param k: As described
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums, int k) {
        // write your code here
        if(nums.size() == 0) return -1;
        
        int n = nums.size();
        vector<Candidate> m(k - 1, Candidate() );
        for(int i = 0; i < n; i++){
            int l;
            for(l = 0; l < k - 1; l++){
                if(m[l].val == nums[i]){
                    m[l].count++;
                    break;
                }
            }
            if(l == k - 1){
                
                for(l = 0; l < k - 1; l++){
                    if(m[l].count == 0){
                        m[l].val = nums[i];
                        m[l].count++;
                        break;
                    }
                }
                
                if(l == k - 1){
                    for(l = 0; l < k - 1; l++){
                        m[l].count--;
                    }
                }
            }
        }
        
        for(int j = 0; j < k - 1; j++){
            m[j].count = 0;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k - 1; j++){
                if(nums[i] == m[j].val){
                    m[j].count++;
                }
                if(m[j].count > n / k) return m[j].val;
            }
        }
        
        return -1;
    }
};