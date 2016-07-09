class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
    	if (nums.size()==0) return 0;
         sort(nums.begin(), nums.end());
         // cout<<"sort success!"<<endl;

        for (std::vector<int>::iterator v=nums.begin();v<nums.end()-1;++v){
        	if (*v == *(v+1)){
        		nums.erase(v);
        		v--;
        	}
        }
        return nums.size();
    }
};

// Total Runtime: 115 ms