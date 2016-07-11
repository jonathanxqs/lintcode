class Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        int i=0,j,ii,l=nums.size();
        if (l==0) return 0;
        j=l-1;
        while (i<j){
	        while (nums[i]<k and i<j) i++;
	        while (nums[j]>=k and j>i) j--;
	        if (i<j){
	        	int tmp=nums[i];
	        	nums[i]=nums[j];
	        	nums[j]=tmp;
	        }

        	}

        i=0;
        while (nums[i]<k and i<l) i++;
        return i;

    }
};

// Total Runtime: 12 ms