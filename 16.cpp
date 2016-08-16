class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: A list of unique permutations.
     */

//      template<typename T>
// ostream& operator<< (ostream& out, const vector<T>& v) {
//     out << "[";
//     size_t last = v.size() - 1;
//     for(size_t i = 0; i < v.size(); ++i) {
//         out << v[i];
//         if (i != last) 
//             out << ", ";
//     }
//     out << "]";
//     return out;
// }

    vector<vector<int> > permuteUnique(vector<int> &nums) {
        // write your code here
        std::vector<int> v;
        int lg=nums.size();
        vector<vector<int> > rt_pm;
        if (lg==0) return rt_pm;

        sort(nums.begin(),nums.end());
        v=nums;
        rt_pm.push_back(v);

        // for (auto s:nums){
        //     cout<<s;
        // }
        // cout<<endl;
        
        // cout<<rt_pm<<endl;

        while (true){
            nextPermutation(nums);

            // for (auto s:nums){
            //      cout<<s;
            // }
            // cout<<endl;

            if (nums==v) break;
            rt_pm.push_back(nums);
        }

        return rt_pm;

    }

    void nextPermutation(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>i;j--)
            {
                if(nums[i]<nums[j])
                {
                    swap(nums[i],nums[j]);
                    sort(nums.begin()+i+1,nums.end());
                    return;
                }
            }
        }

        sort(nums.begin(),nums.end());
    }


};



