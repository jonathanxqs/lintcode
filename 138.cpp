class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){
        // write your code here
        int l1=nums.size();
    	int sum_f1[l1+5];
    	sum_f1[0]=0;
    	int i=0;
    	for (auto s:nums){
    		i++;
    		sum_f1[i]=sum_f1[i-1]+s;
    	}

    	std::vector<int> v;

    	for (int i=0;i<=l1;i++)
    		for (int j=i+1;j<=l1;j++){
    			if (sum_f1[j]-sum_f1[i] == 0)
    			{
    				v.push_back(i);
    				v.push_back(j-1);
    				return v;
    			}
    		}

    }
};

// Total Runtime: 1215 ms