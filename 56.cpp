class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        int l_nums=nums.size(),i=0,j=0;
        std::map<int, int> num_map;
        // sort(nums.begin(),nums.end());
        int f[l_nums+2];
        for (auto s:nums){

        	i++;
        	num_map[s]=i;
        	f[i]=s;

        }

        std::vector<int> v;

        for (j=0;j<=l_nums;j++){
        	if (num_map[target-f[j]]) {
        		v.push_back(j);
        		v.push_back(num_map[target-f[j]]);
        		return v;
        	}
        }

    }
};
