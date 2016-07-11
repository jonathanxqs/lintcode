class Solution {
public:    
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
    int threeSumClosest(vector<int> nums, int target) {
        // write your code here
        sort(nums.begin(),nums.end());
        int nums_l=nums.size();
        int i,j,k,n;
        
        int sum=0,sum1=0,close_sum=1<<31;
        // close_sum= (unsigned) ~close_sum;
        cout<<close_sum<<endl;
        i=0;
        int l,r,mid;

        

        for (i=0;i<=nums_l-1;i++){
        	for (j=i+1;j<=nums_l-1;j++){
        		l=j+1;r=nums_l-1;
        		int target_k=target-nums[i]-nums[j];
        		while (l<=r){
        			mid = (l+r)/2;
        			if (nums[mid]-target_k<0){
        				l=mid+1;
        			}
        			else if (nums[mid]-target_k>0){
        				r=mid-1;
        			}
        				else return target; 
        		}

        		if (mid+1 <nums_l and abs(nums[mid+1]-target_k)<abs(close_sum-target)) 
        			close_sum=nums[mid+1]+nums[j]+nums[i];
        		if (mid >j and abs(nums[mid]-target_k)<abs(close_sum-target)) 		
        			close_sum=nums[mid]+nums[j]+nums[i];
        		if (mid-1 > j and abs(nums[mid-1]-target_k)<abs(close_sum-target)) 
        			close_sum=nums[mid-1]+nums[j]+nums[i];

        	}
        }

        return close_sum;
    }
};


// Total Runtime: 16 ms