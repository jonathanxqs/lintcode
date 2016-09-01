
class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: an integer
     */
    int maxProduct(vector<int>& nums) {
        // write your code here
        vector<int> f, g;
        f.push_back(nums[0]);
        g.push_back(nums[0]);
        for (int i=1; i<nums.size(); ++i) {
            f.push_back(max(max(f[i-1]*nums[i], g[i-1]*nums[i]), nums[i]));
            g.push_back(min(min(f[i-1]*nums[i], g[i-1]*nums[i]), nums[i]));        
        }
        int m = f[0];
        for (int i=1; i<f.size(); ++i) m = max(m, f[i]);
        return m;
    }
};
    }
};